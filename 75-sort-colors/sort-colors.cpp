class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        int lo = 0,mid = 0;
        int hi = n-1;
        while(mid <= hi){
            if(arr[mid] == 2){
                swap(arr[mid],arr[hi]);
                hi--;
            }
            else if(arr[mid] == 0){
                swap(arr[mid],arr[lo]);
                lo++;
                mid++;
            }
            else mid++;//mid = 1
        }
    }
};