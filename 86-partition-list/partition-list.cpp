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
    ListNode* partition(ListNode* head, int x) {
        ListNode* a = new ListNode(10000);
        ListNode* b = new ListNode(10000);
        ListNode* temp = head;
        ListNode* tempa = a;
        ListNode* tempb = b;
        while(temp != NULL){
            if(temp->val < x){
                tempa->next = temp;
                tempa = tempa->next;
                temp = temp->next;
            }
            else{
                tempb->next = temp;
                tempb = tempb->next;
                temp = temp->next;
            }
        }
        tempa->next = b->next;
        tempb->next = NULL;
        return a->next;
    }
};