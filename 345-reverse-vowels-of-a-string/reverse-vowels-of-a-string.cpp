class Solution {
public:
    bool vowel(char c) {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') return true;
        return false;
    }

    string reverseVowels(string arr) {
        int n = arr.size();
        int lo = 0;
        int hi = n - 1;

        while(lo < hi) {

            if(vowel(arr[lo]) && vowel(arr[hi])) {
                swap(arr[lo], arr[hi]);
                lo++;
                hi--;
            }
            else if(!vowel(arr[lo])) {
                lo++;
            }
            else if(!vowel(arr[hi])) {
                hi--;
            }
        }

        return arr;
    }
};