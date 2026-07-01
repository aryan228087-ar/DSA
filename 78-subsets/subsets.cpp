class Solution {
public:
    void helper(int idx,vector<int>& nums,vector<vector<int>>& ans,vector<int>& curr){
        if(idx == nums.size()){
            ans.push_back(curr);
            return;
        }
        //Don't take
        helper(idx+1,nums,ans,curr);
        //Take
        curr.push_back(nums[idx]);
        helper(idx+1,nums,ans,curr);
        curr.pop_back();

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        helper(0,nums,ans,curr);
        return ans;
    }
};