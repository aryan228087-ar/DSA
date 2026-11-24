class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int rows = arr.size();
        int cols = arr[0].size();
        for(int i=0;i<rows;i++){
            int lo = 0;
            int hi = cols-1;
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

