class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int m = arr.size();
        int n = arr[0].size();
        for(int i=0;i<m;i++){
            int lo = 0;
            int hi = n-1;
            while(lo <= hi){
                int mid = lo + (hi-lo)/2;
                if(arr[i][mid] == target) return true;
                else if(arr[i][mid] > target) hi = mid-1;
                else lo = mid+1;
            }
        }
        return false;
    }
};