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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //By making an extra LL SC=(m+n)
        ListNode* tempa = list1;
        ListNode* tempb = list2;
        ListNode* list3 = new ListNode(-1);
        ListNode* tempc = list3;
        
        while(tempa != NULL && tempb != NULL){
            if(tempa->val <= tempb->val){
                ListNode* c = new ListNode(tempa->val);
                tempc->next = c;
                tempc = c;
                tempa = tempa->next;
            }
            else{
                ListNode* c = new ListNode(tempb->val);
                tempc->next = c;
                tempc = c;
                tempb = tempb->next;
            }
        }
        // Remaning elements
        if(tempa == NULL){
            tempc->next = tempb;
        }
        else tempc->next = tempa;
        return list3->next;
    }
};