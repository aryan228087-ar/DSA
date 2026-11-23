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
        
        //Step 2: directly making the final array by writing the crr contents in brr
        brr[n-1] = -1;
        mx = arr[n-1];
        for(int i = n-2;i>=0;i--){
            if(brr[i] > mx) brr[i] = mx;;
            if(arr[i] > mx) mx = arr[i];
        }

        //Step 3: final capacity
        int total = 0;
        for(int i=0;i<n;i++){
            if(brr[i] > arr[i]){
                total += (brr[i] - arr[i]);
            }
        }
        return total;
    }
};



//METHOD 1:
        // int n = arr.size();
        // //step 1: Making of prev greater element
        // int brr[n];
        // brr[0] = -1;
        // int mx = arr[0];
        // for(int i=1;i<n;i++){
        //     brr[i] = mx;
        //     if(mx < arr[i]) mx = arr[i];
        // }

        // //step 2: Making of Next greater element:
        // int crr[n];
        // crr[n-1] = -1;
        // mx = arr[n-1];
        // for(int i=n-1;i>=0;i--){
        //     crr[i] = mx;
        //     if(mx < arr[i]) mx = arr[i];
        // }

        // //step 3: taking min of them into an another array
        // int mini[n];
        // for(int i=0;i<n;i++){
        //     mini[i] = min(brr[i],crr[i]);
        // }

        // //step 4:final filling water
        // int water = 0;
        // for(int i=1;i<n-1;i++){
        //     if(arr[i] < mini[i]){
        //         water += (mini[i]-arr[i]);
        //     }
        // }
        // return water;