class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.length();
        vector<int> ans;
        int lo = 0;
        int hi = n;
        for(int i=0;i<n;i++){
            if(s[i] == 'I'){
                ans.push_back(lo);
                lo++;
            }
            else{
                ans.push_back(hi);
                hi--;
            }
        }
        ans.push_back(hi);
        return ans;
    }
};