class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> rows(numRows);
        string ans = "";

        if(numRows == 1) return s;
        int row = 0;
        int direction = 1;   //means go down
        for(int i=0;i<s.length();i++){
            rows[row] += s[i];
            if(row == numRows-1) direction = -1;
            if(row == 0) direction = 1;
            row += direction;
        }

        for(int i=0;i<numRows;i++){
            ans += rows[i];
        }
        return ans;
    }
};