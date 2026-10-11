class Solution {
public:
    int sumOfSquares(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        int k = 0;
        for(int i=1;i<=n;i++){
            if(n % i == 0){
                k = arr[i-1]*arr[i-1];
                ans += k;
                k = 0;
            } 
        }
        return ans;
    }
};