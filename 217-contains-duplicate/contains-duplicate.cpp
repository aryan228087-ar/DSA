class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int i = 1;
        while(i < n){
            if(arr[i-1] == arr[i]) return true;
            else i++;
        }
        return false;
    }
};