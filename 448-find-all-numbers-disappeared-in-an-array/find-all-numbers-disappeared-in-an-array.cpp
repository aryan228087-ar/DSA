class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& arr) {
        int n = arr.size();
        unordered_set<int> st;
        vector<int> ans;
        for(auto x : arr){
            st.insert(x);
        }
        for(int i=1;i<=n;i++){
            if(st.find(i) == st.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};