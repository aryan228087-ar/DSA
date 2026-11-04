class Solution {
public:
    int captureForts(vector<int>& arr) {
        int n = arr.size();
        int lo = 0;
        int hi = 1;
        int maxcount = 0;

        while(hi<n){
            if(arr[lo] != 0){
                int count = 0;
                while(hi < n && arr[hi] == 0){
                    count++;
                    hi++;
                }
                if(hi < n && arr[hi] != arr[lo]){
                    maxcount = max(count,maxcount);
                }
            }
            lo = hi;
            hi++;
        }
        return maxcount;
    }
};