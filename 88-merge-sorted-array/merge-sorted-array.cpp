class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        int i = m-1;
        int j = n-1;
        int k = m+n-1;

        while(i>=0 && j>=0){
            if(arr1[i] > arr2[j]){
                arr1[k] = arr1[i];
                k--;
                i--;
            }
            else{
                arr1[k--] = arr2[j--];
            }
        }
        while(j >= 0){
            arr1[k--] = arr2[j--];
        }
    }
};


//Here extra space o(n)
// class Solution {
// public:
//     void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
//         vector<int> v;
//         int i = 0;
//         int j = 0;
        
//         while(i<m && j<n){
//             if(arr1[i] > arr2[j]){
//                 v.push_back(arr2[j]);
//                 j++;
//             }
//             else{
//                 v.push_back(arr1[i]);
//                 i++;
//             }
//         }
//         //If any elements are remaning
//         while(i < m){
//             v.push_back(arr1[i]);
//             i++;
//         }
//         while(j < n){
//             v.push_back(arr2[j]);
//             j++;
//         }
//         for(int i=0;i<m+n;i++){
//             arr1[i] = v[i];
//         }
//     }
// };