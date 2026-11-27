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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* odd = new ListNode(-1);
        ListNode* even = new ListNode(-1);
        ListNode*  temp = head;
        ListNode*  tempo = odd;
        ListNode* tempe = even;
        int index = 1;
        while(temp != NULL){
            if(index % 2 != 0){
                tempo->next = temp;
                temp = temp->next;
                tempo = tempo->next;
                index++;
            }
            else{
                tempe->next = temp;
                temp = temp->next;
                tempe = tempe->next;
                index++;
            }
        }
        tempo->next = even->next;
        tempe->next = NULL;
        return odd->next;
    }
};