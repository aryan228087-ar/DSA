class Solution {
public:
    int minOperations(vector<int>& arr, int x) {
        int n = arr.size();
        int total = 0;
        for(int i = 0; i < n; i++){
            total += arr[i];
        }
        int target = total - x;

        if(target < 0){
            return -1;
        }

        int left = 0;
        int sum = 0;
        int maxLen = -1;

        for(int right = 0; right < n; right++){
            sum += arr[right];

            while(sum > target && left <= right){
                sum -= arr[left];
                left++;
            }

            if(sum == target){
                maxLen = max(maxLen, right - left + 1);
            }
        }
        if(maxLen == -1){
            return -1;
        }
        return n - maxLen;
    }
};