class Solution {
public:
    int uniquePaths(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int mod = 1e9 + 7;

        vector<int> down(n, 0);

        down[0] = 1;

        int right;

        for(int i = 0; i < m; i++) {
            right = 0;

            for(int j = 0; j < n; j++) {

                if(grid[i][j] == 1) {
                    swap(right, down[j]);
                }
                else {
                    right = (right + down[j]) % mod;
                    down[j] = right;
                }
            }
        }

        return right;
    }
};