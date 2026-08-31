class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int idx = 1;
        int fidx = -1;
        int sidx = -1;
        int f1idx = -1;
        int s1idx = -1;
        ListNode* a = head;
        ListNode* b = head->next;
        ListNode* c = head->next->next;
        if(c == NULL) return {-1, -1};
        int mindist = INT_MAX;
        int maxdist = -1;

        while(c) {
            if((b->val > a->val && b->val > c->val) || (b->val < a->val && b->val < c->val)) {
                // For maximum distance
                if(fidx == -1) fidx = idx;
                else sidx = idx;  
                // For minimum distance
                f1idx = s1idx;
                s1idx = idx;
                if(f1idx != -1) {
                    int dist = s1idx - f1idx;
                    mindist = min(mindist, dist);
                }
            }
            a = a->next;
            b = b->next;
            c = c->next;
            idx++;
        }

        if(sidx == -1) return {-1, -1};
        maxdist = sidx - fidx;

        return {mindist, maxdist};
    }
};