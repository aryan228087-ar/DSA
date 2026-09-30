class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int i = s.size()-1;
        while(i >= 0){
            if(s[i] == ' '){
                if(count > 0) break;
                i--;
                continue;   
            }
            count++;
            i--;
        }
        return count;
    }
};

//