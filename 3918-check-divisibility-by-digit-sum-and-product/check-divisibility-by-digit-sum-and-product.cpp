class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int prod = 1;
        int k = n;
        while(k > 0){
            int rem = k%10;
            sum += rem;
            prod *= rem;
            k = k/10;
        }
        int final = sum + prod;
        if(n % final == 0) return true;
        return false;
    }
};