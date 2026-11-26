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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return head;
        ListNode* lo = head;
        ListNode* hi = head->next;
        while(hi != NULL){
            if(lo->val == hi->val){
                hi = hi->next;
                if(hi == NULL){
                    lo->next = NULL;
                    return head;
                }
            }
            else{
                lo->next = hi;
                lo = hi;
                hi = lo->next;
            }
        }
        //lo->next = NULL; //cuts the duplicate node from end
        return head;
    }
};