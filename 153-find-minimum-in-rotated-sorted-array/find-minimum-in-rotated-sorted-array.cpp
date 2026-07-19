class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        int lo = 0;
        int hi = n-1;
        if(arr[0] <= arr[n-1]) return arr[0]; //if elements are already sorted
        while(lo <= hi){
            int mid = lo+(hi-lo)/2;

            if(arr[mid] > arr[mid+1] && mid < n-1){
                return arr[mid+1];
            }
            //if mid is the smallest element
            else if(arr[mid] < arr[mid-1] && mid > 0){
                return arr[mid];
            }
            else if(arr[mid] >= arr[0]){
                lo = mid + 1;
            }
            else hi = mid - 1;
        }
        return -1;
    }
};