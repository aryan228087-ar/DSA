class Solution {
public:
    int minMoves2(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int mid = arr[n/2];
        int ans = 0;
        for(int i=0;i<n;i++){
            ans += abs(arr[i] - mid); //We make every element equal to 9(mid)
        }
        return ans;
    }
};