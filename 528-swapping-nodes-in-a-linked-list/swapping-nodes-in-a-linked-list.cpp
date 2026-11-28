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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head == NULL) return NULL;
        
        ListNode* temp = head;
        vector<int> v;
        int len = 0;
        while(temp != NULL){
            len++;
            v.push_back(temp->val);
            temp = temp->next;
        }
        //if(k == len) return head;

        swap(v[k-1],v[len-k]);

        temp = head;
        for(int i=0;i<len;i++){
            temp->val = v[i];
            temp = temp->next;
        }
        return head;
    }
};