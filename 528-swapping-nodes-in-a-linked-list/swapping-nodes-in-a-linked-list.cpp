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
        //Directly swapping in LL
        ListNode* temp = head;
        int len = 0;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        if(k > len) k = k % len;
        ListNode* a = head;
        for(int i=1;i<k;i++){
            a = a->next;
        }
        ListNode* b = head;
        for(int i=1;i<=len-k;i++){
            b = b->next;
        }
        swap(a->val,b->val);
        return head;
    }
};

//by creating a vector and first push all into a vector and then swap and then again in ll
//         if(head == NULL) return NULL;
//         ListNode* temp = head;
//         vector<int> v;
//         int len = 0;
//         while(temp != NULL){
//             len++;
//             v.push_back(temp->val);
//             temp = temp->next;
//         }
//         swap(v[k-1],v[len-k]);

//         temp = head;
//         for(int i=0;i<len;i++){
//             temp->val = v[i];
//             temp = temp->next;
//         }
//         return head;