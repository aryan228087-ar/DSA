class Solution {
public:
    int maximumProduct(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        long long a = 1LL * arr[n-1] * arr[n-2] * arr[n-3];
        long long b = 1LL * arr[0] * arr[1] * arr[n-1];
        return max(a,b);
    }
};