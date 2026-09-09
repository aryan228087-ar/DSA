class Solution {
public:
    long long countCommas(long long n) {
        if(n < 1000) return 0;
        long long count = 0;
        if(n >= 1000LL){
            count += (n-1000+1);
        }
        if(n >= 1000000LL){
            count += (n-1000000+1);
        }
        if(n >= 1000000000LL){
            count += (n-1000000000LL+1);
        }
        if(n >= 1000000000000LL){
            count += (n-1000000000000LL+1);
        }
        if (n >= 1000000000000000LL) {
            count += n - 1000000000000000LL + 1;
        }
        return count;
    }
};