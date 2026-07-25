class Solution {
public:
    int getCommon(vector<int>& arr1, vector<int>& arr2) {
        int n1 = arr1.size();
        int n2 = arr2.size();
        int i = 0;
        int j = 0;
        while(i < n1 && j < n2){
            if(arr1[i] == arr2[j]) return arr1[i];
            else if(arr1[i] < arr2[j]) i++;
            else j++;
        }
        return -1;
    }
};