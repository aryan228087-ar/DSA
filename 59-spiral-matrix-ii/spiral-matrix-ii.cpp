class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int minr = 0;
        int minc = 0;
        int maxr = n-1;
        int maxc = n-1;
        int num = 1;
        vector<vector<int>> ans(n,vector<int>(n));
        while(minr <= maxr && minc <= maxc){
            //Right
            for(int j=minc;j<=maxc;j++){
                ans[minr][j] = num++;
            }
            minr++;
            //Down
            for(int i=minr;i<=maxr;i++){
                ans[i][maxc] = num++;
            }
            maxc--;
            if(minr <= maxr && minc <= maxc){
                //Left
                for(int j=maxc;j>=minc;j--){
                    ans[maxr][j] = num++;
                }
                maxr--;
                //UP
                for(int i=maxr;i>=minr;i--){
                    ans[i][minc] = num++;
                }
                minc++;
            }
        }
        return ans;
    }
};