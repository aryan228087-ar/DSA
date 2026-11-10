class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& arr) {
        int n = arr.size();
        int even = 0;
        int odd = 1;
        while(even < n && odd < n){
            if(arr[even] % 2 == 0){
                even += 2;
            }
            else if(arr[odd] % 2 != 0){
                odd += 2;
            }
            else{
                swap(arr[even],arr[odd]);
                even += 2;
                odd += 2;
            }
        }
        return arr;
    }
};