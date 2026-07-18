class Solution {
public:
    int gcd(int a,int b){
        while(b != 0){
            int rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }
    int findGCD(vector<int>& arr) {
        int n = arr.size();
        int small = INT_MAX;
        int large = INT_MIN;
        for(int i=0;i<n;i++){
            if(small > arr[i]) small = arr[i];
            if(large < arr[i]) large = arr[i];
        }
        return gcd(small,large);
    }
};