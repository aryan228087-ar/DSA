class Solution {
public:
    int countNegatives(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        int count = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j] < 0) count++;
            }
        }
        return count;
    }
};