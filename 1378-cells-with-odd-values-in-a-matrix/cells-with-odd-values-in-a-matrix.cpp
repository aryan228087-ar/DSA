class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> arr(m, vector<int>(n, 0));
        for(auto ele : indices){
            int r = ele[0];
            int c = ele[1];
            //inc row
            for(int j=0;j<n;j++){
                arr[r][j]++;
            }
            //inc col
            for(int i=0;i<m;i++){
                arr[i][c]++;
            }
        }
        int count = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j] % 2 == 1) count++;
            }
        }
        return count;
    }
};