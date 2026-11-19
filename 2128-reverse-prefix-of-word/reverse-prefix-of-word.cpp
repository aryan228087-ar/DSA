class Solution {
public:
    string reversePrefix(string word, char ch) {
        int lo = 0;

        int n = word.length();
        for(int i=0;i<n;i++){
            if(word[i] == ch){
                int hi = i;
                while(lo <= hi){
                    swap(word[lo],word[hi]);
                    lo++;
                    hi--;
                }
            break;
            }
        }
        return word;
    }
};