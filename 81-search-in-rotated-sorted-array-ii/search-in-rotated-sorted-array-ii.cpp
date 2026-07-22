class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int n = arr.size();
        int lo = 0;
        int hi = n-1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid] == target){
                return true;
            }
            //Handle duplicates
            else if(arr[lo] == arr[mid] && arr[hi] == arr[mid]){
                lo++;
                hi--;
            }
            //Left half sorted
            else if(arr[lo] <= arr[mid]){
                if(arr[lo] <= target && target < arr[mid]){
                    hi = mid-1;
                }
                else lo = mid + 1;
            }
            //Right half sorted
            else{
                if(arr[hi] >= target && arr[mid] < target){
                    lo = mid + 1;
                }
                else hi = mid-1;
            }
        }
        return false;
    }
};