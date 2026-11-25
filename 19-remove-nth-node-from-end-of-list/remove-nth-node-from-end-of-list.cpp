
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int len = 0;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        if(len == n){ //means delete the first node
            head = head->next;
            return head;
        }
        if(n == 1 && len == 2){
            head->next = NULL;
            return head;
        }
        int m = len-n+1; //Tells which node should be deleted from start
        int idx = m-1;
        temp = head;
        for(int i=0;i<idx-1;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};

// ListNode* slow = head;
//         ListNode* fast = head;
//         for(int i=0;i<n+1;i++){
//             if(fast == NULL) return head->next;
//             fast = fast->next;
//         }
//         while(fast != NULL){
//             slow = slow->next;
//             fast = fast->next;
//         }
//         slow->next = slow->next->next;
//         return head;