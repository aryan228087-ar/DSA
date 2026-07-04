class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1) return 0;
        if(k%2 == 0){//even,flip
            int prevans = kthGrammar(n-1,k/2);
            if(prevans == 1) return 0;
            else return 1;
        }
        else{//odd,same
            return kthGrammar(n-1,k/2+1);
        }
    }
};