class Solution {
public:
    int firstStableIndex(vector<int>& arr, int k) {
        int n = arr.size();
        for(int i=0;i<n;i++){
            int maxe = arr[0];
            int mine = INT_MAX;
            for(int j=0;j<=i;j++){
                if(arr[j] > maxe) maxe = arr[j];
            }
            for(int x=i;x<n;x++){
                if(arr[x] < mine) mine = arr[x];
            }
            if((maxe - mine) <= k) return i;
        }
        return -1;
    }
};