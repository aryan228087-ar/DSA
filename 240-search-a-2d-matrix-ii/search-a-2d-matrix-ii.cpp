class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        //By normal 2D approach where tc is less as we do no search the whole row each time
        int rows = arr.size();
        int cols = arr[0].size();
        int i = 0;
        int j = cols-1;
        while(i <= rows-1 && j >= 0){
            if(arr[i][j] == target) return true;
            else if(arr[i][j] > target) j--;
            else i++;
        }
        return false;
    }
};

//good approach by binary search by applying binary search on each row
// int rows = arr.size();
//         int cols = arr[0].size();
//         for(int i=0;i<rows;i++){
//             int lo = 0;
//             int hi = cols-1;
//             while(lo <= hi){
//                 int mid = lo + (hi-lo)/2;
//                 if(arr[i][mid] == target) return true;
//                 else if(arr[i][mid] > target) hi = mid-1;
//                 else lo = mid+1;
//             }
//         }
//         return false;
