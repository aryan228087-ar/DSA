class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        int minr = 0;
        int minc = 0;
        int maxr = m-1;
        int maxc = n-1;
        vector<int> ans;
        while(minr <= maxr && minc <= maxc){
            //right
            for(int j=minc;j<=maxc;j++){
                ans.push_back(arr[minr][j]); 
            }
            minr++;
            //Down
            for(int i=minr;i<=maxr;i++){
                ans.push_back(arr[i][maxc]);
            }
            maxc--;

            if(minr <= maxr && minc <= maxc){
                //left
                for(int j=maxc;j>=minc;j--){
                    ans.push_back(arr[maxr][j]);
                }
                maxr--;
                //up
                for(int i=maxr;i>=minr;i--){
                    ans.push_back(arr[i][minc]);
                }
                minc++;
            }
        }
        return ans;
    }
};