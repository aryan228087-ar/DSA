class Solution {
public:
    int findNthDigit(int n) {
        long long digit = 1;
        long long count = 9;
        long long start = 1;

        //Find the grp
        while(n > digit * count){
            n = n - digit * count;
            digit++;
            count *= 10;
            start *= 10;
        }
        //find the actual ans
        long long num = start + (n-1)/digit;
        //convert that no into string
        string s = to_string(num);

        //find the req digit
        int idx = (n-1) % digit;
        return s[idx] - '0';
    }
};