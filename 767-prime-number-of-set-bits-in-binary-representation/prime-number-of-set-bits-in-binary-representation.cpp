class Solution {
public:
    int countsetbits(int val){
        int count = 0;
        while(val > 0){
            if(val % 2 == 1) count++;
            val = val/2;
        }
        if(count == 2 || count == 3 || count == 5 || count == 7 || count == 11 || count == 13 || count == 17 || count == 19) return 1;
        return 0;
    }
    int countPrimeSetBits(int left, int right) {
        int sum = 0;
        for(int i=left;i<=right;i++){
            sum += countsetbits(i);
        }
        return sum;
    }
};