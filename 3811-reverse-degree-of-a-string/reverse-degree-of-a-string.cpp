class Solution {
public:
    int reverseDegree(string s) {
        int n = s.length();
        int sum = 0;
        for(int i=0;i<n;i++){
            int k = 122 - int(s[i])+1;
            sum += k * (i+1);
        }
        return sum;
    }
};