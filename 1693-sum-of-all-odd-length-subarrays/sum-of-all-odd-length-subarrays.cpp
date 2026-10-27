class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        vector<int> pre(n);
        int sum = 0;
        pre = arr;
        for(int i=1;i<n;i++){
            pre[i] += pre[i-1]; //prefix sum array
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j+=2){
                if(i == 0){
                    sum += pre[j];
                }
                else sum += pre[j] - pre[i-1];
            }
        }
        return sum;
    }
};