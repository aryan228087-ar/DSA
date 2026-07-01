class Solution {
public:
    int reverseNumber(int n) {
        int rev = 0;
        while (n != 0) {
            int digit = n%10;
            if(rev > INT_MAX/10 || (rev == INT_MAX/10 && digit>7)) return 0;
            rev = rev * 10 + digit;
            n /= 10;
        }
        return rev;
    }
    bool isPalindrome(int x) {
        if(x<0 || (x%10==0 && x!=0)) return false;
        int y = reverseNumber(x);
        if(y != x) return false;
        return true;
    }
};