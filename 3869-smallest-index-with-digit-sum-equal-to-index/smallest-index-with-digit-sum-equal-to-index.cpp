class Solution {
public:
    int digitsum(int number){
        int sum = 0;
        while(number > 0){
            int k = number%10;
            sum += k;
            number = number/10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& arr) {
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(digitsum(arr[i]) == i) return i;
        }
        return -1;
    }
};