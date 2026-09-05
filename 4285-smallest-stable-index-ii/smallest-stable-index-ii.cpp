class Solution {
public:
    int firstStableIndex(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int>prefMax(n);
        vector<int>suffMin(n);
        prefMax[0] = arr[0];
        for(int i=1;i<n;i++){
            prefMax[i] = max(prefMax[i-1],arr[i]);
        }
        suffMin[n-1] = arr[n-1];
        for(int i=n-2;i>=0;i--){
            suffMin[i] = min(suffMin[i+1],arr[i]);
        }
        for(int i=0;i<n;i++){
            if(prefMax[i] - suffMin[i] <= k){
                return i;
            }
        }
        return -1;
    }
};