class Solution {
public:
    int specialArray(vector<int>& arr) {
        //sort(arr.begin(),arr.end());
        int n = arr.size();
        for(int i=0;i<=n;i++){
            int count = 0;
            for(int j=0;j<n;j++){
                if(arr[j] >= i){
                    count++;
                }
            }
            if(count == i) return i;
            
        }
        return -1;
    }
};