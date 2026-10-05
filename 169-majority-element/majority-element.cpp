class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        // sort(arr.begin(), arr.end());
        // return arr[n/2];
        
        int cand = arr[0];
        int count = 1;
        for(int i=1;i<n;i++){
            if(arr[i] == cand) count++;
            else count--;

            if(count == 0){
                cand = arr[i];
                count = 1;
            }
        }
        return cand;
    }
};