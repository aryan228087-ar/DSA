class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& arr, int k) {
        int m = arr.size();
        int n = arr[0].size();
        //Treat the matrix as 1d array
        vector<int> nums;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                nums.push_back(arr[i][j]);
            }
        }
        int total = nums.size();
        k %= total;
        rotate(nums.begin(),nums.end()-k,nums.end());
        //put elements back to arr
        int idx = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr[i][j] = nums[idx];
                idx++;
            }
        }
        return arr;
    }
};