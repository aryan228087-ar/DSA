class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& arr, int limit) {
        int n = arr.size();
        vector<pair<int,int>>a;
        for(int i=0;i<n;i++){
            a.push_back({arr[i],i});
        }
        sort(a.begin(),a.end());
        int i = 0;
        while(i < n){
            int j = i;
            //first group formation until the limit >=(therefore j will be moving)
            while(j+1<n && a[j+1].first - a[j].first <= limit){
                j++;
            }
            vector<int> values;
            vector<int> indices;
            for(int k=i;k<=j;k++){
                values.push_back(a[k].first);
                indices.push_back(a[k].second);
            }
            sort(indices.begin(),indices.end()); //indices of a particular grp gets sorted 
            //put the smallest values at smallest indices
            for(int k=0;k<values.size();k++){
                arr[indices[k]] = values[k];
            }
            i=j+1; //giong for the another group
        }
        return arr;
    }
};