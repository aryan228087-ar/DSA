class Solution {
public:
    int repeatedNTimes(vector<int>& arr) {
        int n = arr.size();
        for(int i=0;i<(n-1);i++){
            int count = 0;
            for(int j=i;j<n;j++){
                if(arr[i] == arr[j]) count++;
            }
            if(count == n/2) return arr[i];
        }
        return -1;
    }
};