class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* d=new ListNode();
        d->next=head;
        ListNode* f=d, * s=d;
        while(n--) f=f->next;
        while(f->next)
            f=f->next,s=s->next;
        s->next=s->next->next;
        return d->next;
    }
};


//https://leetcode.com/problems/remove-nth-node-from-end-of-list/
