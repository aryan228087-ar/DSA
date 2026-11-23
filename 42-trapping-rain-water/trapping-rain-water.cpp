class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();
        //step 1: Making of prev greater element
        int brr[n];
        brr[0] = -1;
        int mx = arr[0];
        for(int i=1;i<n;i++){
            brr[i] = mx;
            if(mx < arr[i]) mx = arr[i];
        }

        //step 2: Making of Next greater element:
        int crr[n];
        crr[n-1] = -1;
        mx = arr[n-1];
        for(int i=n-1;i>=0;i--){
            crr[i] = mx;
            if(mx < arr[i]) mx = arr[i];
        }

        //step 3: taking min of them into an another array
        int mini[n];
        for(int i=0;i<n;i++){
            mini[i] = min(brr[i],crr[i]);
        }

        //step 4:final filling water
        int water = 0;
        for(int i=1;i<n-1;i++){
            if(arr[i] < mini[i]){
                water += (mini[i]-arr[i]);
            }
        }
        return water;
    }
};



//METHOD 1:
//          int n = arr.size();
//         //previous greater element
//         vector<int> prev(n); //give the size of an vector whenever you are using its elements
//         prev[0] = -1;
//         int max = arr[0];
//         for(int i=1;i<n;i++){
//             prev[i] = max;
//             if(max < arr[i]) max = arr[i];
//         }
//         vector<int> next(n);
//         next[n-1] = -1;
//         max = arr[n-1];
//         for(int i=n-2;i>=0;i--){
//             next[i] = max;
//             if(max < arr[i]) max = arr[i];
//         }
//         //finding minimum 
//         for(int i=0;i<n;i++){
//             prev[i] = min(prev[i],next[i]);
//         }