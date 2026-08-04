class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        //int lo = nums[0];
        vector<int> ans;
        for(int i=0;i<n-1;i++){
            int x = nums[i] + 1;
            while(x < nums[i+1]){
                ans.push_back(x);
                x++;
            }
        }
        return ans;
    }
};