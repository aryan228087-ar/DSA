class Solution {
public:
    int longestSubsequence(vector<int>& arr) {
        int n = arr.size();
        int x = 0;
        for(int i=0;i<n;i++){
            x = x ^ arr[i];
        }
        if(x != 0) return n;
        for(int i=0;i<n;i++){
            if(arr[i] != 0){
                return n-1;
            }
        }
        return 0;
    }
};