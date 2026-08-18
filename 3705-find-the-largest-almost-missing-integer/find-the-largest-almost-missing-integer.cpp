class Solution {
public:
    int largestInteger(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int, int> mp;

        for(int x : arr)
            mp[x]++;

        int ans = -1;

        // k = 1
        if(k == 1) {
            for(auto x : mp) {
                if(x.second == 1)
                    ans = max(ans, x.first);
            }
        }

        // k = n
        else if(k == n) {
            for(int x : arr)
                ans = max(ans, x);
        }

        // 1 < k < n
        else {
            if(mp[arr[0]] == 1)
                ans = max(ans, arr[0]);

            if(mp[arr[n-1]] == 1)
                ans = max(ans, arr[n-1]);
        }

        return ans;
    }
};