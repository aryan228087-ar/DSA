class Solution {
public:
    int hIndex(vector<int>& arr) {
        int n = arr.size();
        int lo = 0;
        int hi = n-1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid] == n-mid) return n-mid;
            else if(arr[mid] < n-mid) lo = mid+1;
            else hi = mid-1;
        }
        return n-lo;
    }
};