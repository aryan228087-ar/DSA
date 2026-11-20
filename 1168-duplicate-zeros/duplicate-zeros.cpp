class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        int lo = 0;
        int hi = 1;
        while(lo < n){
            if(arr[lo] == 0){
                ans.push_back(arr[lo]);
                ans.push_back(arr[lo]);
                lo++;
                
            }
            else{
                ans.push_back(arr[lo]);
                lo++;
                
            }
        }
        for(int i=0;i<n;i++){
            arr[i] = ans[i];
        }
    }
};