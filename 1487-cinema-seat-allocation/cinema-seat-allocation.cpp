class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& arr) {
        unordered_map<int,set<int>> mp;
        for(auto x : arr){
            mp[x[0]].insert(x[1]);
        }
        int ans = (n-mp.size()) * 2; //if any row is empty then add it earlier
        for(auto x : mp){
            bool left = true;
            bool right = true;
            bool middle = true;
            for(int i=2;i<=5;i++){
                if(x.second.find(i) != x.second.end()){ //if any seat is occupied then  return false
                    left = false;
                }
            }
            for(int i=4;i<=7;i++){
                if(x.second.find(i) != x.second.end()){
                    middle = false;
                }
            }
            for(int i=6;i<=9;i++){
                if(x.second.find(i) != x.second.end()){
                    right = false;
                }
            }
            if(left && right){
                ans += 2;
            }
            else if(left || middle || right) ans += 1;
        }
        return ans;
    }
};