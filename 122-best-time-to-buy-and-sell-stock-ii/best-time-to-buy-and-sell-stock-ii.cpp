class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        vector<int> dp(n,0);
        for(int i=1;i<n;i++){
            if(arr[i] > arr[i-1]){
                dp[i] = dp[i-1] + (arr[i] - arr[i-1]);
            }
            else dp[i] = dp[i-1];
        }
        return dp[n-1];
    }
};