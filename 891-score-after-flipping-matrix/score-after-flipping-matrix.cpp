class Solution {
public:
    int matrixScore(vector<vector<int>>& arr) {
        int rows = arr.size();
        int cols = arr[0].size();
        // Making first cols as 1
        for(int i=0;i<rows;i++){
            if(arr[i][0] == 0){
                for(int j=0;j<cols;j++){
                    if(arr[i][j] == 0) arr[i][j] = 1;
                    else arr[i][j] = 0;
                }
            }
        }

        //Flip the columns where noz > noo
        for(int j=0;j<cols;j++){
            int noz = 0;
            int noo = 0;
            for(int i=0;i<rows;i++){
                if(arr[i][j] == 0) noz++;
                else noo++;
            }
            if(noz > noo){
                for(int i=0;i<rows;i++){
                    if(arr[i][j] == 0) arr[i][j] = 1;
                    else arr[i][j] = 0;
                }
            }
        }
        //calculating score by binary to decimal conversion
        int sum = 0;
        for(int i=0;i<rows;i++){
            int x = 1;
            for(int j=cols-1;j>=0;j--){
                sum += (arr[i][j] * x);
                x = x*2;
            }
            
        }
        return sum;
    }
};