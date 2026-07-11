class Solution {
public:
    void helper(int idx,unordered_map<char,string>& mp,vector<string>& ans,string &curr,string &digits){
        if(idx == digits.size()){
            ans.push_back(curr);
            return;
        }
        string letters = mp[digits[idx]];
        for(int i=0;i<letters.size();i++){
            curr.push_back(letters[i]);
            helper(idx+1,mp,ans,curr,digits);
            curr.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0) return {};
        unordered_map<char,string> mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        vector<string> ans;
        string curr = "";
        helper(0,mp,ans,curr,digits);
        return ans;
    }
};