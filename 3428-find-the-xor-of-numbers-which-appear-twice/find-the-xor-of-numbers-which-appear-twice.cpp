class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto ele : nums){
            mp[ele]++;
        }
        //Traverse into map
        int xr = 0;
        for(auto x : mp){
            if(x.second == 2){
                xr ^= x.first;
            }
        }
        return xr;
    }
};