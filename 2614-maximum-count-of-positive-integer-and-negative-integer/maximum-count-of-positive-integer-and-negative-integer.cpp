class Solution {
public:
    int maximumCount(vector<int>& arr) {
        int n = arr.size();
        int lo = 0;
        int hi = n-1;
        //finding first non negative
        int firstnonnegative = n;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid] >= 0){
                firstnonnegative = mid;
                hi = mid-1;
            }
            else lo = mid+1;
        }
        int negcount = firstnonnegative;//because the count starts from 0
        //finding first positive no (>0)
        int firstpositive = n;
        lo = 0;
        hi = n-1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid] > 0){
                firstpositive = mid;
                hi = mid-1;
            }
            else lo = mid+1;
        }
        int poscount = n - firstpositive;
        return max(negcount,poscount);
    }
};




// int n = arr.size();
//         int negcount = 0;
//         int poscount = 0;
//         for(int i=0;i<n;i++){
//             if(arr[i] < 0) negcount++;
//             else if(arr[i] == 0) continue;
//             else poscount++;
//         }
//         return max(poscount,negcount);