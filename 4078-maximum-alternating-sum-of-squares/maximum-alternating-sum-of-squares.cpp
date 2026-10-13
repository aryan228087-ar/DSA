class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<long long> v;
        for(auto ele : nums){
            v.push_back(1LL * ele * ele);
        }
        long long ans = 0;
        sort(v.rbegin(),v.rend());
        int positive = (n+1)/2;
        for(int i=0;i<n;i++){
            if(i < positive) ans += v[i];
            else ans -= v[i];
        }
        return ans;
    }
};