class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        const long long MOD = 1e9 + 7;
        int cnt[31] = {0};

        for (int x : nums) {
            for (int i = 0; i < 31; i++) {
                if (x & (1 << i)) cnt[i]++;
            }
        }

        long long ans = 0;

        while (k--) {
            long long x = 0;

            for (int i = 30; i >= 0; i--) {
                if (cnt[i] > 0) {
                    x += (1LL << i);
                    cnt[i]--;
                }
            }

            if (x == 0) break;   // nothing left to build

            x %= MOD;
            ans = (ans + x * x) % MOD;
        }

        return (int)ans;
    }
};