class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int i=0;
        int j=0;
        int count = 0;
        while(j<s.size()){
            while(st.find(s[j]) != st.end()){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            count = max(count,j-i+1);
            j++;
        }
        return count;
    }
};