class Solution {
public:
    int jump(vector<int>& nums) {\
        int n = nums.size();
        int jumps = 0;
        int maxjumps = 0;
        int currend = 0;
        for(int i=0;i<n-1;i++){
            maxjumps = max(maxjumps,i+nums[i]);
            if(i == currend){
                jumps++;
                currend = maxjumps;
            }
        }
        return jumps;
    }
};