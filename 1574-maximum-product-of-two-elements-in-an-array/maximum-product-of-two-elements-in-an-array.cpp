class Solution {
public:
    int maxProduct(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int pro = 0;
        for(int i=0;i<n;i++){
            pro = (arr[n-2] - 1) * (arr[n-1] - 1);
        }
        return pro;
    }
};