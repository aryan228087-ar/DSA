class Solution {
public:
    void reversestr(string &s, int i, int j) {
        while (i < j) {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;

            i++;
            j--;
        }
    }
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;
        int j = 0;

        while(j <= n){
            if(j == n || s[j] == ' '){
                reversestr(s,i,j-1);
                i=j+1;
            }
            j++;
        }
        return s;
    }
};