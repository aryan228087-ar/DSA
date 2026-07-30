class Solution {
public:
    void helper(int idx,vector<vector<int>>& ans,vector<int>& arr){
        if(idx == arr.size()){
            ans.push_back(arr);
            return;
        }
        for(int i=idx;i<arr.size();i++){
            swap(arr[idx],arr[i]);
            helper(idx+1,ans,arr);
            swap(arr[idx],arr[i]); // backtrack
        }
    }
    vector<vector<int>> permute(vector<int>& arr) {
        vector<vector<int>> ans;
        helper(0,ans,arr);
        return ans;
    }
};