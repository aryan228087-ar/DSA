class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int minr = 0;
        int maxr = n-1;
        int minc = 0;
        int maxc = n-1;
        vector<vector<int>> ans(n, vector<int>(n));
        int num = 1;
        while(minr <= maxr && minc <= maxc){
            //Right
            for(int i=minc;i<=maxc;i++){
                ans[minr][i] = num++;
            }
            minr++;

            //Down
            for(int i=minr;i<=maxr;i++){
                ans[i][maxc] = num++;
            }
            maxc--;

            if(minr <= maxr && minc <= maxc){
                //Left
                for(int i=maxc;i>=minc;i--){
                    ans[maxr][i] = num++;
                }
                maxr--;

                //Up
                for(int i=maxr;i>=minr;i--){
                    ans[i][minc] = num++;
                }
                minc++;
            }
        }
        return ans;

    }
};

//         int m = matrix.size(); //rows
//         int n = matrix[0].size(); //cols
//         
//         for(int i=minr;i<=maxr;i++){
//             vector<int> row;
//             while(minc <= maxc){
//                 row.push_back()
//             }
//         }