class Solution {
public:
    int missingInteger(vector<int>& arr) {
        int n = arr.size();
        int sum = arr[0];
        for(int i=1;i<n;i++){
            if(arr[i] == arr[i-1] + 1){
                sum += arr[i];
            }
            else break;
        }
        unordered_set<int> st;
        for(auto x : arr){
            st.insert(x);
        }
        while(st.find(sum) != st.end()){
            sum++;
        }
        return sum;
    }
};