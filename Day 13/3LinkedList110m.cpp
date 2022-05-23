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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        
        ListNode* res=new ListNode();
        ListNode* t=res;
        int c=0, s=0;
        
        while(l1 || l2 || c){
            s=0;
            if(l1){
                s += l1->val;
                l1=l1->next;
            }
            if(l2){
                s += l2->val;
                l2=l2->next;
            }
            s +=c;
            c=s/10;
            ListNode* n = new ListNode(s%10);
            t->next=n;
            t=t->next;
        }
        
        return reverse(res->next);
    }
};


//https://leetcode.com/problems/add-two-numbers-ii/
