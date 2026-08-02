class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n = arr.size();
        int maxcount = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            if(arr[i] == 0){
                
                maxcount = max(maxcount,count);
                count = 0;
            }
            else count++;
            
        }
        maxcount = max(maxcount,count);
        return maxcount;
    }
};