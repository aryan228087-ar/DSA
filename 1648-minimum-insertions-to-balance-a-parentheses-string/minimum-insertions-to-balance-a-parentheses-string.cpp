class Solution {
public:
    int minInsertions(string s) {
        int n = s.length();
        stack<int> st;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                st.push(i);
            }
            else{
                if(i+1 < n && s[i+1] == ')'){
                    if(!st.empty()){
                        st.pop();
                    }
                    else ans++;
                    i++;
                }
                else{
                    ans++;
                    if(!st.empty()){
                        st.pop();
                    }
                    else ans++;
                }
            }
        }
        ans += st.size()*2;
        return ans;
    }
};