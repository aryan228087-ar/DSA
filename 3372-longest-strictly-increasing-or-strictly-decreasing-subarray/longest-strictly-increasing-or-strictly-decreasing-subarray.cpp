class Solution {
public:
    int longestMonotonicSubarray(vector<int>& arr) {
        int n = arr.size();
        int inc = 1;
        int dec = 1;
        int maxlength = 1;
        for(int i=1;i<n;i++){
            if(arr[i] > arr[i-1]){
                inc++;
                dec = 1;
            }
            else if(arr[i] < arr[i-1]){
                dec++;
                inc = 1;
            }
            else{
                inc = 1;
                dec = 1;
            }
            maxlength = max(maxlength,max(inc,dec));
        }
        return maxlength;
    }
};