class Solution {
public:
    vector<string> summaryRanges(vector<int>& arr) {
        int n = arr.size();
        vector<string> ans;
        for(int i=0;i<n;i++){
            int start = arr[i];
            while(i+1 < n && arr[i+1] == arr[i] + 1){
                i++;
            }
            int end = arr[i];
            if(start == end) ans.push_back(to_string(arr[i]));
            else ans.push_back(to_string(start) + "->" + to_string(end));
        }
        return ans;
    }
};