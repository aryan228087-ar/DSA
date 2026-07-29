class Solution {
public:
    void helper(int idx,vector<int>& nums,vector<vector<int>>& ans,vector<int>& curr){
        if(idx == nums.size()){
            ans.push_back(curr);
            return;
        }
        //Take curr element
        curr.push_back(nums[idx]);
        helper(idx+1,nums,ans,curr);
        curr.pop_back();

        //Check for duplicates(if found inc the index)
        while(idx+1 < nums.size() && nums[idx] == nums[idx+1]){
            idx++;
        }

        //Don't take curr element
        helper(idx+1,nums,ans,curr);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> curr;
        helper(0,nums,ans,curr);
        return ans;
    }
};