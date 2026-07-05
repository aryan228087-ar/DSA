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
        helper(arr,target-arr[idx],v,ans,idx+1);
        v.pop_back();
        //Skip duplicates before exclude
        int i = idx;
        while(i+1<arr.size() && arr[i] == arr[i+1]) i++;
        //Exclude
        helper(arr,target,v,ans,i+1);
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        vector<int> v;
        vector<vector<int>> ans;
        helper(arr,target,v,ans,0);
        return ans;
    }
};