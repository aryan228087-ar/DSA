class Solution {
public:
    int maximumCount(vector<int>& arr) {
        int n = arr.size();
        int negcount = 0;
        int poscount = 0;
        for(int i=0;i<n;i++){
            if(arr[i] < 0) negcount++;
            else if(arr[i] == 0) continue;
            else poscount++;
        }
        return max(poscount,negcount);
    }
};

// int n = arr.size();
//         int lo = 0;
//         int hi = n-1;
//         while(lo <= hi){
//             int mid = lo + (hi-lo)/2;
//             if(arr[mid] == 0){
//                 if(mid > 0 && arr[mid-1] == 0)
//             }
//         }