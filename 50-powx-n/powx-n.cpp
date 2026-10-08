class Solution {
public:
    double myPow(double x, int n) {
        long long num = n;
        long double base = x;
        long double ans = 1;
        if(num < 0){
            base = 1/base;
            num = -num;
        }
        
        while(num > 0){
            if(num % 2 == 1){
                ans = ans * base;
            }
            base = base * base;
            num = num/2;
        }
        return ans;
    }
};