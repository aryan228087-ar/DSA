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
    ListNode* reverseList(ListNode* head){
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right) return head;
        ListNode* temp = head;
        int len = 1;
        ListNode* a = NULL;
        ListNode* b = NULL;
        ListNode* c = NULL;
        ListNode* d = NULL;
        
        while(temp != NULL){
            if(len == left-1) a = temp;
            if(len == left) b = temp;
            if(len == right) c = temp;
            if(len == right+1) d = temp;
            temp = temp->next;
            len++;
        }
        if(a != NULL) a->next = NULL;
        c->next = NULL;
        ListNode* k = reverseList(b);
        if(a) a->next = c;
        b->next = d;
        if(a) return head;
        return k;
    }
};