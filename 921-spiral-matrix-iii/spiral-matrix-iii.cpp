class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int r = rStart;
        int c = cStart;
        int idx = 1;
        vector<vector<int>> ans;
        while(ans.size() < rows * cols){
            //Right
            for(int j=0;j<idx;j++){
                if((r >= 0 && r < rows) && (c >= 0 && c < cols)){
                    ans.push_back({r,c});
                }
                c++;
            }
            //Down
            for(int i=0;i<idx;i++){
                if((r >= 0 && r < rows) && (c >= 0 && c < cols)){
                    ans.push_back({r,c});
                }
                r++;
            }
            idx++;
            //Left
            for(int j=0;j<idx;j++){
                if((r >= 0 && r < rows) && (c >= 0 && c < cols)){
                    ans.push_back({r,c});
                }
                c--;
            }
            //UP
            for(int i=0;i<idx;i++){
                if((r >= 0 && r < rows) && (c >= 0 && c < cols)){
                    ans.push_back({r,c});
                }
                r--;
            }
            idx++;
        }
        return ans;
    }
};