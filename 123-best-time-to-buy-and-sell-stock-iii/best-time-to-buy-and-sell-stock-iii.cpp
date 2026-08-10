class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        if(n == 0) return 0;
        vector<vector<int>> dp(n,vector<int>(4,0)); //nrows and 4 columns
        dp[0][0] = -arr[0];
        dp[0][1] = 0;
        dp[0][2] = -arr[0];
        dp[0][3] = 0;

        for(int i=1;i<n;i++){
            dp[i][0] = max(dp[i-1][0],-arr[i]); // - because it is buyed
            dp[i][1] = max(dp[i-1][1],dp[i-1][0] + arr[i]);
            dp[i][2] = max(dp[i-1][2],dp[i-1][1] - arr[i]);
            dp[i][3] = max(dp[i-1][3],dp[i-1][2] + arr[i]);
        }
        return dp[n-1][3];
    }
};