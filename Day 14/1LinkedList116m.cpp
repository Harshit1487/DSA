class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* d=new ListNode(0, head);
        ListNode* t=d;
        
        while(head){
            if(head->next && head->val==head->next->val){
                while(head->next && head->val==head->next->val)
                    head = head->next;
                t->next=head->next;
            }
            else t=t->next;
            head=head->next;
        }
        
        return d->next;
    }
};


//https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
