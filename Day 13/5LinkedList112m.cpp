class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head || !head->next) return;
        
        ListNode* s=head, * f=head;
        while(f && f->next){
            s=s->next;
            f=f->next->next;
        }
        ListNode* cur=s,* pre=NULL, * nex;
        while(cur){
            nex=cur->next;
            cur->next=pre;
            pre=cur;
            cur=nex;
        }
        ListNode *n1=head, *n2=pre;
        ListNode* t;
        while(n2->next){
            t=n1->next;
            n1->next=n2;
            n1=t;
            
            t=n2->next;
            n2->next=n1;
            n2=t;
        }
    }
};


//https://leetcode.com/problems/reorder-list/
