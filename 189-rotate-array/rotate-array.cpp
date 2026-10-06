class Solution {
public:
    void reversepart(int i, int j, vector<int>& arr){
        while(i<=j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        if(k>n) k = k%n;
        reversepart(0,n-k-1,arr);
        reversepart(n-k,n-1,arr);
        reversepart(0,n-1,arr);
    }
};