class Solution {
public:
    int countdigits(int n) {
        int count = 0;
        while (n > 0) {
            count++;
            n /= 10;
        }
        return count;
    }
    vector<int> sequentialDigits(int low, int high) {
        string s = "123456789";
        vector<int> ans;
        int lowlen = countdigits(low);
        int highlen = countdigits(high);

        for(int len = lowlen;len<=highlen;len++){
            for(int i=0;i+len <= 9;i++){
                int num = stoi(s.substr(i,len));
                if(num >= low && num <= high){
                    ans.push_back(num);
                }
            }
        }
        return ans;
    }
};