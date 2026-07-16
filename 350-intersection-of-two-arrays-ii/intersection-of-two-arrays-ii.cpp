class Solution {
public:
    vector<int> intersect(vector<int>& arr1, vector<int>& arr2) {
        int m = arr1.size();
        int n = arr2.size();
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        int i = 0;
        int j = 0;
        vector<int> ans;
        while(i < m && j < n){
            if(arr1[i]==arr2[j]){
                ans.push_back(arr1[i]);
                i++;
                j++;
            }
            else if(arr1[i] > arr2[j]){
                j++;
            }
            else i++;
        }
        return ans;
    }
};