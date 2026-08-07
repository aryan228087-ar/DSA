class Solution {
public:
    int hIndex(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end(),greater<int>()); //sorting in descending order
        int h = 0;
        for(int i=0;i<n;i++){
            if(arr[i] >= i+1){
                h = i+1;
            }
            else break;
        }
        return h;
    }
};