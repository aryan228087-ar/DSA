class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        if(n==1){
            if(arr[0] == 9){
                ans.push_back(1);
                ans.push_back(0);
                return ans;
            }
            else{
                ans.push_back(arr[0] + 1);
                return ans;
            }
        }
        ans = arr;
        for(int i=n-1;i>=0;i--){
           if(ans[i] < 9){
                ans[i]++;
                return ans;
           }
           else{
                ans[i] = 0;
           }
        }
        //If all digits were 9
        ans.insert(ans.begin(),1);
        return ans;
    }
};
            
            