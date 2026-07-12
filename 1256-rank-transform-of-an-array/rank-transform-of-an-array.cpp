class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> brr;
        for(int i=0;i<n;i++){
            brr.push_back(arr[i]);
        }
        sort(brr.begin(),brr.end());
        unordered_map<int,int> mp;
        int rank = 1;
        for(int i=0;i<brr.size();i++){
            if(mp.find(brr[i]) == mp.end()){
                mp[brr[i]] = rank;
                rank++;
            }
        }
        for(int i=0;i<arr.size();i++){
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};