class Solution {
public:
    int maxSubarrayLength(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int,int> mp;
        int i = 0;
        int ans = 0;
        for(int j=0;j<n;j++){
            mp[arr[j]]++;
            while(mp[arr[j]] > k){
                mp[arr[i]]--;//removing elements from starting
                i++;
            }
            ans = max(ans,j-i+1);
        }
        return ans;
    }
};