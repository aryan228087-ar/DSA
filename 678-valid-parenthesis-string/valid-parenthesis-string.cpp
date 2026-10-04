class Solution {
public:
    bool checkValidString(string s) {
        int n = s.length();
        int lo = 0;
        int hi = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                lo++;
                hi++;
            }
            else if(s[i] == ')'){
                lo--;
                hi--;
            }
            else{ // For *
                lo--;
                hi++; 
            }
            if(hi < 0) return false;
            if(lo < 0) lo = 0;
        }
        return lo == 0;
    }
};