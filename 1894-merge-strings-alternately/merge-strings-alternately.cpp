class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int lo = 0;
        int hi = 0;
        int n = word1.size();
        int m = word2.size();
        string ans = "";
        while(lo < n && hi < m){
            ans += word1[lo];
            lo++;
            ans += word2[hi];
            hi++;
        }
        while(lo < n){
            ans += word1[lo];
            lo++;
        }
        while(hi < m){
            ans += word2[hi];
            hi++;
        }
        return ans;
    }
};