class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& arr) {
        int n = arr.size();

        // Bottom-left + middle
        for(int row=0; row<n; row++){
            vector<int> v;
            int i = row, j = 0;

            while(i<n && j<n){
                v.push_back(arr[i][j]);
                i++;
                j++;
            }

            sort(v.begin(), v.end(), greater<int>());

            i = row;
            j = 0;
            int k = 0;

            while(i<n && j<n){
                arr[i][j] = v[k];
                i++;
                j++;
                k++;
            }
        }

        // Top-right
        for(int col=1; col<n; col++){
            vector<int> v;
            int i = 0, j = col;

            while(i<n && j<n){
                v.push_back(arr[i][j]);
                i++;
                j++;
            }

            sort(v.begin(), v.end());

            i = 0;
            j = col;
            int k = 0;

            while(i<n && j<n){
                arr[i][j] = v[k];
                i++;
                j++;
                k++;
            }
        }

        return arr;
    }
};