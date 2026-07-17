class Solution {
public:
    int arrangeCoins(int n) {
        long long lo = 0;
        long long hi = n;
        while(lo <= hi){
            long long mid = lo + (hi-lo)/2;
            long long coins = mid * (mid+1)/2;
            if(n == coins) return mid;
            else if(coins > n) hi = mid-1; 
            else  lo = mid+1;
        }
        return hi;
    }
};