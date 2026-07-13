class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int lo = 0;
        int hi = n-1;
        while(lo <= hi){
            int mid = lo+(hi-lo)/2;
            if(arr[mid] == target) return mid;

            //if left half is sorted
            if(arr[lo] <= arr[mid]){
                if(target >= arr[lo] && target < arr[mid]){
                    hi = mid-1;
                }
                else lo = mid+1;
            }

            //if right half is sorted
            else{
                if(target > arr[mid] && target <= arr[hi]){
                    lo = mid + 1;
                }
                else hi = mid-1;
            }
        }
        return -1;
    }
};