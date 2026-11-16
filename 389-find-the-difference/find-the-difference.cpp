class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;
        for(auto ele : s){
            mp[ele]++;
        }
        unordered_map<char,int> mp1;
        for(auto ele : t){
            mp1[ele]++;
        }
        for(auto ele : mp1){
            if(mp[ele.first] != ele.second){ //mp[ele.first] = 0/1 and ele.second = 0/1
                return ele.first;
            }
        }
        return -1;
    }
};