class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        vector<int> freq(101,0);
        vector<int> ans;
        for(auto x : arr){
            freq[x]++;
        }
        for(int i=1;i<=100;i++){
            while(freq[i] > 0){
                for(int j=1;j<=100;j++){
                    if(freq[j] > 0){
                        ans.push_back(j);
                        freq[j]--;
                    }
                }
            }
        }
        return ans;
    }
};