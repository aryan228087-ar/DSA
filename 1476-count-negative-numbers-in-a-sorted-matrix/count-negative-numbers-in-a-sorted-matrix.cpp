class Solution {
public:
    int countNegatives(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        int count = 0;
        for(int i=0;i<m;i++){
            int lo = 0;
            int hi = n-1;
            int idx = n;
            while(lo <= hi){
                int mid = lo + (hi-lo)/2;
                if(arr[i][mid] < 0){
                    idx = mid;
                    hi = mid-1;
                }
                else lo = mid + 1;
            }
            count += (n-idx);
        }
        return count;
    }
};


//         int m = arr.size();
//         int n = arr[0].size();
//         int count = 0;
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(arr[i][j] < 0) count++;
//             }
//         }
//         return count;