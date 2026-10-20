class Solution {
public:
    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();

        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());

        int ans = 0;
        vector<int> freq(100001, 0);

        for(int k = 1; k <= n; k++) {
            if(n % k != 0)
                continue;

            bool ok = true;

            for(int i = 0; i < n; i += k) {

                // Check that both blocks have same elements
                for(int j = i; j < i + k; j++) {
                    freq[nums[j]]++;
                    freq[sorted[j]]--;
                }

                for(int j = i; j < i + k; j++) {
                    if(freq[nums[j]] != 0) {
                        ok = false;
                        break;
                    }
                }

                for(int j = i; j < i + k; j++) {
                    freq[nums[j]] = 0;
                    freq[sorted[j]] = 0;
                }

                if(!ok)
                    break;

                // Check if original block is a rotation
                int cnt = 0;

                for(int j = i; j < i + k - 1; j++) {
                    if(nums[j] > nums[j + 1])
                        cnt++;
                }

                if(k > 1 && nums[i + k - 1] > nums[i])
                    cnt++;

                if(cnt > 1) {
                    ok = false;
                    break;
                }
            }

            if(ok)
                ans += k;
        }

        return ans;
    }
};