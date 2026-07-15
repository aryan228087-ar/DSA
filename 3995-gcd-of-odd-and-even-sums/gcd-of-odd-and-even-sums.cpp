class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd = 0;
        int sumeven = 0;
        for(int i=1;i<=n;i++){
            sumodd += 2*i-1;
            sumeven += 2 * i;
        }
        //Finding GCD
        for(int i=min(sumodd,sumeven);i>=1;i--){
            if(sumodd % i == 0 && sumeven % i == 0){
                return i;
                break;
            }
        }
        return -1;
    }
};