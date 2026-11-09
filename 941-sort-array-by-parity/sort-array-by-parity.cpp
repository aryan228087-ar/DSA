class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        int n = arr.size();
        int lo = 0;
        int hi = n-1;
        while(lo <= hi){
            if(arr[lo] % 2 != 0 && arr[hi] % 2 == 0){
                swap(arr[lo],arr[hi]);
                lo++;
                hi--;
            }
            if(arr[lo] % 2 == 0) lo++;
            if(arr[hi] % 2 != 0) hi--;
        }
        return arr;
    }
};