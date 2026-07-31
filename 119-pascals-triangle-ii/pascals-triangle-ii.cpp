class Solution {
public:
    vector<int> getRow(int rowindex) {
        vector<int> row(rowindex+1,1);
        for(int i=2;i<=rowindex;i++){
            for(int j = i-1;j>=1;j--){
                row[j] = row[j] + row[j-1];
            }
        }
        return row;
    }
};