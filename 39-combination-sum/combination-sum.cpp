class Solution {
public:
    void helper(vector<int>& arr,int target,vector<int>& v,vector<vector<int>>& ans,int idx){
        if(target == 0){
            ans.push_back(v);
            return;
        }
        if(idx == arr.size() || target < 0) return;
        //Include
        v.push_back(arr[idx]);
        helper(arr,target-arr[idx],v,ans,idx);
        v.pop_back();
        //Exclude
        helper(arr,target,v,ans,idx+1);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int> v;
        vector<vector<int>> ans;
        helper(arr,target,v,ans,0);
        return ans;
    }
};