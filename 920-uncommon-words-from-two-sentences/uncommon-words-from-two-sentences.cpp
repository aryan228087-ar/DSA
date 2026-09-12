class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> mp;
        vector<string> ans;
        string word = "";
        for(int i=0;i<=s1.size();i++){
            if(i == s1.size() || s1[i] == ' '){
                mp[word]++;
                word = "";
            }
            else{
                word += s1[i];
            }
        }
        word = "";
        for(int i=0;i<=s2.size();i++){
            if(i == s2.size() || s2[i] == ' '){
                mp[word]++;
                word = "";
            }
            else{
                word += s2[i];
            }
        }
        for(auto ele : mp){
            if(ele.second == 1){
                ans.push_back(ele.first);
            }
        }
        return ans;
    }
};