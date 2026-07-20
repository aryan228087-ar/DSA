class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        int lo = 0;
        int hi = n-1;
        if (arr[0] < arr[n - 1]) return arr[0];
        while(lo <= hi){
            int mid = lo+(hi-lo)/2;

            if(mid < n-1 && arr[mid] > arr[mid+1]){
                return arr[mid+1];
            }
            else if(mid > 0 && arr[mid] < arr[mid-1]){
                return arr[mid];
            }
            else if(arr[lo] == arr[mid] && arr[hi] == arr[mid]){
                if(lo < n-1 && arr[lo] > arr[lo+1]) return arr[lo+1];
                lo++;
                if(hi > 0 && arr[hi] < arr[hi-1]) return arr[hi];
                hi--;
            }
            else if(arr[mid] >= arr[lo]){
                lo = mid+1;
            }
            else hi = mid-1;
        }
        return arr[0];
    }
};