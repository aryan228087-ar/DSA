class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int lo = 0;
        int hi = n-1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(target >= letters[mid]) lo = mid+1;
            else hi = mid-1;
        }
        if(lo == n) return letters[0];
        return letters[lo];
    }
};