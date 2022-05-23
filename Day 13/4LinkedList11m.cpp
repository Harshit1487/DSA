class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int l, int r) {
        if(head==NULL || l==r) return head;
        
        ListNode* t, * pre, * tail = NULL;
        ListNode* d = new ListNode();
        pre=d;
        d->next=head;
        for(int i=0;i<l-1;i++)
            pre=pre->next;
        
        tail=pre->next;
        
        for(int i=0;i<r-l;i++){
            t = pre->next;
            pre->next=tail->next;
            tail->next = tail->next->next;
            pre->next->next=t;
        }
        return d->next;
    }
};


//https://leetcode.com/problems/reverse-linked-list-ii/
