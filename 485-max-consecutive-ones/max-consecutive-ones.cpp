class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n = arr.size();
        int maxcount = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            if(arr[i] == 1){
                count++;
                maxcount = max(maxcount,count);
            }
            else count = 0;
            
        }
        return maxcount;
    }
};