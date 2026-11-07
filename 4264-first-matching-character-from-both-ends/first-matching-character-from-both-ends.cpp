class Solution {
public:
    int firstMatchingIndex(string s) {
        int n = s.length();
        int lo = 0;
        int hi = n-1;
        while(lo <= hi){
            if(s[lo] == s[hi]){
                return lo;
            }
            lo++;
            hi--;
        }
        return -1;
    }
};