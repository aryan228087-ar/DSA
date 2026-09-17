class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> prefix(n,INT_MAX);
        vector<int> suffix(n,INT_MAX);
        //prefix array
        int sum = 0;
        int left = 0;
        int best = INT_MAX;
        for(int right=0;right<n;right++){
            sum += arr[right];
            while(sum > target){
                sum -= arr[left];
                left++;
            }
            if(sum == target){
                int len = right-left+1;
                best = min(best,len);
            }
            prefix[right] = best;
        }
        //suffix array
        sum = 0;
        int right = n-1;
        best = INT_MAX;
        for(int left = n-1;left >=0;left--){
            sum += arr[left];
            while(sum > target){
                sum -= arr[right];
                right--;
            }
            if(sum == target){
                int len = right - left + 1;
                best = min(best,len);
            }
            suffix[left] = best;
        }
        //combine both prefix and suffix
        int ans = INT_MAX;
        for(int i=0;i<n-1;i++){
            if(prefix[i] != INT_MAX && suffix[i+1] != INT_MAX){
                ans = min(ans,prefix[i] + suffix[i+1]);
            }
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};