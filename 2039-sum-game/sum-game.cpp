class Solution {
public:
    bool sumGame(string num) {
        int n = num.length();
        int leftsum = 0, rightsum = 0, qleft = 0, qright = 0;
        int mid = n/2;
        for(int i=0;i<mid;i++){
            if(num[i] == '?'){
                qleft++;
            }
            else{
                leftsum += num[i] - '0';
            }
        }
        for(int i=mid;i<n;i++){
            if(num[i] == '?'){
                qright++;
            }
            else{
                rightsum += num[i] - '0';
            }
        }
        int qdiff = qleft - qright;
        int sdiff = leftsum - rightsum;
        if(qdiff % 2 != 0){ //if no of question marks are same(means % == 0) then any how bob will win
            return true;
        }
        return sdiff != ((-qdiff)/2) * 9;
    }
};