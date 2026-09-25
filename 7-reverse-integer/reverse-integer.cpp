class Solution {
public:
    int reverse(int x) {
        int value = 0;
        while(x != 0){
            int digit = x % 10;
            x = x / 10;

            if(value > INT_MAX/10 || value == INT_MAX/10 && digit > 7) return 0;
            if(value < INT_MIN/10 || value == INT_MIN/10 && digit < -8) return 0;
            value = value * 10 + digit;
        }
        return value;
    }
};