class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* l1=new ListNode(0);
        ListNode* t1=l1;
        ListNode* l2=new ListNode(0);
        ListNode* t2=l2;
        while(head){
            if(head->val<x) {
                t1->next=head;
                t1=t1->next;
            }
            else{
                t2->next=head;
                t2=t2->next;
            }
            head=head->next;
        }
        t1->next=l2->next;
        t2->next=NULL;
        return l1->next;
    }
};


//https://leetcode.com/problems/partition-list/
