class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n = arr.size();
        if(target > arr[n-1]) return n;
        int lo = 0;
        int hi = n-1;
        int idx = -1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(target == arr[mid]){
                return mid;
            }
            else if(target > arr[mid]) lo = mid+1;
            else hi = mid-1;
        }
        return lo;
    }
};