class Solution {
public:
    
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        
        ListNode* mid = findmid(head);
        ListNode* le = sortList(head);
        ListNode* ri = sortList(mid);
        
        return merge(le, ri);
    }
    ListNode* merge(ListNode* l, ListNode* r){
        
        ListNode* d = new ListNode(0);
        ListNode* cur = d;
        while(l && r){
            if(l->val<=r->val){
                cur->next=l;
                l=l->next;
            }
            else{
                cur->next=r;
                r=r->next;
            }
            cur=cur->next;
        }
        cur->next = l!=NULL ? l : r;
        return d->next;  
    } 
    
    ListNode* findmid(ListNode* head){
        ListNode* s=head;
        ListNode* f=head->next;
        while(f && f->next){
            s=s->next;
            f=f->next->next;
        }
        ListNode* m = s->next;
        s->next=NULL;
        return m;
    }
};


//https://leetcode.com/problems/sort-list/
