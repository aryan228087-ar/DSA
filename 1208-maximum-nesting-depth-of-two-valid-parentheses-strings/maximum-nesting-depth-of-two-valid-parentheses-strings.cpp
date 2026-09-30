class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> ans;
        stack<char> st;
        for(int i=0;i<seq.length();i++){
            if(seq[i] == '('){
                st.push(seq[i]);
                ans.push_back(st.size() % 2);   //0/1
            }
            else{
                ans.push_back(st.size() % 2);
                st.pop();
            }
        }
        return ans;
    }
};