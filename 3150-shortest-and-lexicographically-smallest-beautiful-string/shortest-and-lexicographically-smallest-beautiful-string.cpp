class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length();
        string ans = "";
        int left = 0;
        int count = 0;
        for(int right=0;right<n;right++){
            if(s[right] == '1') count++;
            while(count == k){
                string temp = s.substr(left,right-left+1);
                if(ans == "" || ans.length() > temp.length() || (ans.length() == temp.length() && ans > temp)){
                    ans = temp;
                }
                if(s[left] == '1') count--;
                left++;
            }
        }
        return ans;
    }
};