class Solution {
public:
    int maxLength(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        for(int i=0;i<n;i++){
            long long prod = 1;
            int gcd = 0;
            long long lcm = 1;
            for(int j=i;j<n;j++){
                if(prod > LLONG_MAX / arr[j])
                    break;
                prod *= arr[j];
                gcd = __gcd(gcd,arr[j]);
                lcm = lcm / __gcd(lcm,(long long)arr[j])*arr[j];

                if(prod == gcd * lcm){
                    count = max(count,j-i+1);
                }
            } 
        }
        return count;
    }
};