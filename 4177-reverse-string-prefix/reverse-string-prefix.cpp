class Solution {
public:
    string reversePrefix(string s, int k) {
        int n = s.length();
        int lo = 0;
        int hi = k-1;
        while(lo <= hi){
            swap(s[lo],s[hi]);
            lo++;
            hi--;
        }
        return s;
    }
};