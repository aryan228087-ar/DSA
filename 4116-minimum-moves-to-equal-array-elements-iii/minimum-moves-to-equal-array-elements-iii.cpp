class Solution {
public:
    int minMoves(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int ans = 0;
        for(int i=0;i<n;i++){
            ans += (arr[n-1] - arr[i]);
        }
        return ans;
    }
};