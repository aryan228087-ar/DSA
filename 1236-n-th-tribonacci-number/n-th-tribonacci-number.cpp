class Solution {
public:
    int tribonacci(int n) {
        if(n<=1) return n;
        if(n==2) return 1;
        int dp[4];
        dp[0] = 0;dp[1] = 1; dp[2] = 1;
        for(int i=1;i<=n-2;i++){
            dp[3] = dp[0] + dp[1] + dp[2];
            dp[0] = dp[1];
            dp[1] = dp[2];
            dp[2] = dp[3];
        }
        return dp[3];
    }
};