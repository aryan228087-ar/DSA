class Solution {
public:
    int m,n;
    int dfs(vector<vector<int>>& grid,int i, int j){
        //if went outside the grid
        if(i<0 || i>=m || j<0 || j>=n){
            return false;
        }
        //if water
        if(grid[i][j] == 1) return true;

        //Mark visited
        grid[i][j] = 1;
        bool up = dfs(grid,i-1,j);
        bool down = dfs(grid,i+1,j);
        bool left = dfs(grid,i,j-1);
        bool right = dfs(grid,i,j+1);

        return up && down && left && right;
    }
    int closedIsland(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int ans = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 0){
                    if(dfs(grid,i,j)) ans++;
                }
            }
        }
        return ans;
    }
};