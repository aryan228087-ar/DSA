class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> mp;
        for(auto x : arr){
            mp[x]++;
        }
        vector<int> ans;
        int count = n/3;
        for(auto x : mp){
            if(x.second > count){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};