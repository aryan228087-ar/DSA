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
        //without making extra LL sc = O(1)
        ListNode* list3 = new ListNode(-1);
        ListNode* temp = list3;
        while(list1 != NULL && list2 != NULL){
            if(list1->val <= list2->val){
                temp->next = list1;
                temp = list1;
                list1 = list1->next;
            }
            else{
                temp->next = list2;
                temp = list2;
                list2 = list2->next;
            }
        }
        //Remaning element
        if(list1 == NULL){
            temp->next = list2;
        }
        else temp->next = list1;
        return list3->next;
    }
};

//By making an extra LL SC=(m+n)

        // ListNode* tempa = list1;
        // ListNode* tempb = list2;
        // ListNode* list3 = new ListNode(-1);
        // ListNode* tempc = list3;
        
        // while(tempa != NULL && tempb != NULL){
        //     if(tempa->val <= tempb->val){
        //         ListNode* c = new ListNode(tempa->val);
        //         tempc->next = c;
        //         tempc = c;
        //         tempa = tempa->next;
        //     }
        //     else{
        //         ListNode* c = new ListNode(tempb->val);
        //         tempc->next = c;
        //         tempc = c;
        //         tempb = tempb->next;
        //     }
        // }
        // // Remaning elements
        // if(tempa == NULL){
        //     tempc->next = tempb;
        // }
        // else tempc->next = tempa;
        // return list3->next;