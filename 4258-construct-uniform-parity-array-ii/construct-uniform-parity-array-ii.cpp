class Solution {
public:
    bool uniformArray(vector<int>& arr) {
        int n = arr.size();
        int mine = INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i] < mine) mine = arr[i];
        }
        //if min is odd then we can make all odd
        if(mine % 2 != 0){
            return true;
        }
        //if min is even then check whether any even exists(if exists then false)
        for(int i=0;i<n;i++){
            if(arr[i] % 2 != 0){
                return false;
            }
        }
        return true;
    }
};