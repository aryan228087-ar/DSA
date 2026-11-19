class Solution {
public:
    int minimizeSum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        return min({arr[n-1]-arr[2],arr[n-2]-arr[1],arr[n-3]-arr[0]});
    }
};