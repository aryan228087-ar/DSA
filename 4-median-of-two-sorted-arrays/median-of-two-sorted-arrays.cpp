class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        int m = arr1.size();
        int n = arr2.size();
        vector<int> ans;
        int i=0,j=0;
        //Merge two arrays
        while(i<m && j<n){
            if(arr1[i] < arr2[j]){
                ans.push_back(arr1[i]);
                i++;
            }
            else{
                ans.push_back(arr2[j]);
                j++;
            }
        }
        //Push remaning elements into ans
        while(i<m){
            ans.push_back(arr1[i]);
            i++;
        }
        while(j<n){
            ans.push_back(arr2[j]);
            j++;
        }
        int size = ans.size();
        if(size % 2 == 1){
            return ans[size/2];
        }
        else return (ans[size/2] + ans[size/2 - 1]) / 2.0;
    }
};