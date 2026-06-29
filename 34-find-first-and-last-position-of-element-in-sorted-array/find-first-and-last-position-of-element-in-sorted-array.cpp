class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int n = arr.size();\
        int first = -1;
        int last = -1;

        //Finding first occurrence
        int lo = 0;
        int hi = n-1;
        while(lo <= hi){
            int mid = lo + (hi - lo)/2;
            if(arr[mid] == target){
                first = mid;
                hi = mid-1;
            }
            else if(arr[mid] < target) lo = mid + 1;
            else hi = mid - 1;
        }
        //Finding second occurrence
        lo = 0;
        hi = n-1;
        while(lo <= hi){
            int mid = lo + (hi - lo)/2;
            if(arr[mid] == target){
                last = mid;
                lo = mid+1;
            }
            else if(arr[mid] < target) lo = mid + 1;
            else hi = mid - 1;
        }
        return {first,last};
    }
};