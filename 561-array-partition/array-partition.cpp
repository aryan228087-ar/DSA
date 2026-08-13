class Solution {
public:
    int arrayPairSum(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int ans = 0;
        for(int i=0;i<n;i+=2){
            ans += arr[i];
        }
        return ans;
    }
};