class Solution {
public:
    const int MOD = 1e9 + 7;

    long long solve(vector<int>& nums) {
        int n = nums.size();

        if(n <= 2)
            return 1;

        vector<int> left, right;

        for(int i = 1; i < n; i++) {
            if(nums[i] < nums[0])
                left.push_back(nums[i]);
            else
                right.push_back(nums[i]);
        }

        long long l = solve(left);
        long long r = solve(right);

        long long ways = comb(n - 1, left.size());

        return ways * l % MOD * r % MOD;
    }

    long long comb(int n, int r) {
        long long ans = 1;

        for(int i = 1; i <= r; i++) {
            ans = ans * (n - r + i) % MOD;
            ans = ans * modInverse(i) % MOD;
        }

        return ans;
    }

    long long modInverse(long long x) {
        return power(x, MOD - 2);
    }

    long long power(long long a, long long b) {
        long long ans = 1;

        while(b > 0) {
            if(b % 2 == 1)
                ans = ans * a % MOD;

            a = a * a % MOD;
            b /= 2;
        }

        return ans;
    }

    int numOfWays(vector<int>& nums) {
        return (solve(nums) - 1 + MOD) % MOD;
    }
};