class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        vector<int> freq(100001,0);
        int n = nums1.size();
        long long k = (long long) k1 + k2;
        for(int i=0;i<n;i++){
           freq[abs(nums1[i] - nums2[i])]++;
        }
        for(int i=100000;i>0 && k>0;i--){
            if(freq[i] == 0) continue;
            long long moves = min(k,(long long)freq[i]);
            freq[i] -= moves;
            freq[i-1] += moves;
            k -= moves;
        }
        long long ans = 0;
        for(int i=0;i<=100000;i++){
            ans += 1LL * i * i * freq[i];
        }
        return ans;
    }
};

//priority_queue<int> pq;
        // int n = nums1.size();
        // long long ans = 0;
        // for(int i=0;i<n;i++){
        //     pq.push(abs(nums1[i] - nums2[i]));
        // }
        // long long k = (long long) k1 + k2;
        // while(k>0 && pq.top() > 0){
        //     int x = pq.top();
        //     pq.pop();
        //     pq.push(x-1);
        //     k--;
        // }
        // while(!pq.empty()){
        //     long long x = pq.top();
        //     pq.pop();
        //     ans += x * x;
        // }
        // return ans; //not a optimized approach