class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length();
        stack<int> st;
        st.push(-1);
        int maxcount = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                st.push(i);
            }
            else{
                st.pop();
                if(st.empty()) st.push(i);
                else{
                    maxcount = max(maxcount,i-st.top());
                }
            }
        }
        return maxcount;
    }
};

// i=0 ')' → stack [0]
// i=1 '(' → stack [0,1]
// i=2 ')' → pop → stack [0]
//           length = 2 - 0 = 2

// i=3 '(' → stack [0,3]
// i=4 ')' → pop → stack [0]
//           length = 4 - 0 = 4