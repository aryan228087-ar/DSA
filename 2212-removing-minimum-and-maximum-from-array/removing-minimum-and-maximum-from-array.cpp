class Solution {
public:
    int minimumDeletions(vector<int>& arr) {
        int n = arr.size();
        int maxe = INT_MIN;
        int maxidx = 0;
        int mine = INT_MAX;
        int minidx = 0;
        for(int i=0;i<n;i++){
            if(arr[i] > maxe){
                maxe = arr[i];
                maxidx = i;
            }
            if(arr[i] < mine){
                mine = arr[i];
                minidx = i;
            }
        }
        int first = min(minidx, maxidx);
        int second = max(minidx, maxidx);

        int fromFront = second + 1;
        int fromBack = n - first;
        int fromBoth = first + 1 + n - second;

        return min({fromFront, fromBack, fromBoth});
    }
};