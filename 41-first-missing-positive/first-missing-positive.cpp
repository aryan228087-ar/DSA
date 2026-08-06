class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x : nums){
            mp[x]++;
        }
        int missing = 1;
        while(mp.find(missing) != mp.end()){
            missing++;
        }
        return missing;
    }
};