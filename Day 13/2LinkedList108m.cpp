class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode();
        ListNode* t = res;
        int c=0;
        
        while(l1 || l2 || c){
            int s=0;
            if(l1){
                s+=l1->val;
                l1=l1->next;
            }
            if(l2){
                s+=l2->val;
                l2=l2->next;
            }
            s+=c;
            c=s/10;
            ListNode* node = new ListNode(s%10);
            t->next=node;
            t=t->next;
        }
        return res->next;
    }
};


//https://leetcode.com/problems/add-two-numbers/
