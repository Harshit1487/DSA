class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a=headA;
        ListNode* b=headB;
        
        while(a && b){
            if(a==b) return a;
            a=a->next;
            b=b->next;
            if(!a && !b) return NULL;
            if(!a) a=headB;
            if(!b) b=headA;
        }
        return NULL;
    }
};


//https://leetcode.com/problems/intersection-of-two-linked-lists/
