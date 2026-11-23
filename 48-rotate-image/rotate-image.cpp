class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int n = arr.size();
        //Transpose
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
        //Reverse each row
        for(int k=0;k<n;k++){
            int lo = 0;
            int hi = n-1;
            while(lo <= hi){
                int temp = arr[k][lo];
                arr[k][lo] = arr[k][hi];
                arr[k][hi] = temp;
                lo++;
                hi--;
            }
        }
    }
};