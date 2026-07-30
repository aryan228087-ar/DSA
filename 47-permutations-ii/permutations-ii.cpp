class Solution {
public:
    void helper(int idx,vector<vector<int>>& ans,vector<int>& arr){
        if(idx == arr.size()){
            ans.push_back(arr);
            return;
        }
        unordered_set<int> st;
        for(int i=idx;i<arr.size();i++){
            if(st.find(arr[i]) != st.end()) continue;
            st.insert(arr[i]);
            swap(arr[idx],arr[i]);
            helper(idx+1,ans,arr);
            swap(arr[idx],arr[i]);
        }
        
    }
    vector<vector<int>> permuteUnique(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        helper(0,ans,arr);
        return ans;
    }
};