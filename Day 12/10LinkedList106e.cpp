class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* cur=head;
        ListNode* pre=NULL;
        ListNode* nex=NULL;
        
        while(cur){
            nex=cur->next;
            cur->next=pre;
            pre=cur;
            cur=nex;
        }
        return pre;
    }
    
    bool isPalindrome(ListNode* head) {
        if(!head->next) return true;
        
        ListNode* s=head;
        ListNode* f=head;
        
        while(f->next  && f->next->next){
            f=f->next->next;
            s=s->next;
        }
        s->next=reverse(s->next);
        s=s->next;
       
        while(s!=NULL){
            if(head->val!=s->val)
                return false;
            head=head->next;
            s=s->next;
        }
        
        return true;
    }
};
