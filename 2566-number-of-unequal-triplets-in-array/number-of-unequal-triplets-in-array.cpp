class Solution {
public:
    int unequalTriplets(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        for(int i=0;i<n-2;i++){
            for(int j=i;j<n-1;j++){
                for(int k=j;k<n;k++){
                    if(arr[i] != arr[j] && arr[i] != arr[k] && arr[j] != arr[k]){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};