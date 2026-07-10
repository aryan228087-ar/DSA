class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int n = arr.size();
        int i = 0;
        int j = n-1;
        while(i <= j){
            if(val == arr[i]){
                swap(arr[i],arr[j]);
                j--;
            }
            else i++;
        }
        return i;
    }
};