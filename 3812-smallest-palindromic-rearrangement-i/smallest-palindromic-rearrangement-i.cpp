class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> cnt(26,0);
        for(char c : s){
            cnt[c - 'a']++;
        }
        string left = "";
        string middle = "";
        for(char c = 'a';c <= 'z';c++){
            int idx = c - 'a';
            for(int i=0;i<cnt[idx]/2;i++){
                left += c;
            }
            if(cnt[idx] % 2 == 1) middle = c;
        }
        //Right half
        string right = left;
        reverse(right.begin(),right.end());
        return left+middle+right;
    }
};