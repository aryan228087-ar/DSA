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
    ListNode* merge(ListNode* a,ListNode* b){
        ListNode* c = new ListNode(-1);
        ListNode* temp = c;
        while(a != NULL && b != NULL){
            if(a->val <= b->val){
                temp->next = a;
                a = a->next;
                temp = temp->next;
            }
            else{
                temp->next = b;
                b = b->next;
                temp = temp->next;
            }
        }
        if(a == NULL){
            temp->next = b;
        }
        else temp->next = a;
        c = c->next;
        return c;
    }
    ListNode* mergeKLists(vector<ListNode*>& arr) {
        // Method 1:Merging last  2 ele of arr and then pushback to last (IN REPEAT)
        
        if(arr.size() == 0) return NULL;
        while(arr.size() > 1){
            ListNode* a = arr[arr.size()-1];
            arr.pop_back();
            ListNode* b = arr[arr.size()-1];
            arr.pop_back();
            ListNode* c = merge(a,b);
            arr.push_back(c);
        }
        return arr[0];
    }
};