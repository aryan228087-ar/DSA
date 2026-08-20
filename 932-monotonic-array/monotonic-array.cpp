class Solution {
public:
    bool isMonotonic(vector<int>& arr) {
        int n = arr.size();
        for(int i=1;i<n;i++){
            if(arr[0] < arr[n-1]){
                if(arr[i] < arr[i-1]) return false;
            }
            else{
                if(arr[i] > arr[i-1]){
                    return false;
                }
            }
        }
        return true;
    }
};