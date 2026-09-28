class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int maxcount = count;
        stack<char> st;

        for(int i=0;i<s.size();i++){
            st.push(s[i]);
        }
        while(st.size() > 0){
            if(st.top() == ')'){
                count++;
                maxcount = max(maxcount,count);
                st.pop();
            }
            else if(st.top() == '('){
                count --;
                st.pop();
            }
            else{
                st.pop();
            }
        }
        return maxcount;
    }
};