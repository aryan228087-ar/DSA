/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {  
    int minr = 0;
    int minc = 0;
    int maxr = m-1;
    int maxc = n-1;
    ListNode* temp = head;
    vector<vector<int>> ans(m,vector<int>(n,-1));
    while(minr <= maxr && minc <= maxc){
        //Right
        for(int j=minc;j<=maxc;j++){
            if(temp == NULL) return ans;
            ans[minr][j] = temp->val;
            temp = temp->next;
        }
        minr++;
        //Down
        for(int i=minr;i<=maxr;i++){
            if(temp == NULL) return ans;
            ans[i][maxc] = temp->val;
            temp = temp->next;
        }
        maxc--;

        if(minr <= maxr && minc <= maxc){
            //Left
            for(int j=maxc;j>=minc;j--){
                if(temp == NULL) return ans;
                ans[maxr][j] = temp->val;
                temp = temp->next;
            }
            maxr--;
            //UP
            for(int i=maxr;i>=minr;i--){
                if(temp == NULL) return ans;
                ans[i][minc] = temp->val;
                temp = temp->next;
            }
            minc++;
        }
        
    }
    return ans;
    }
};