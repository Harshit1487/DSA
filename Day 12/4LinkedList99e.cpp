class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        ListNode* t=head;
        while(t->next){
            if(t->val==t->next->val){
                ListNode* del = t->next;
                t->next=t->next->next;
                delete del;
            }
            else t=t->next;
        }
        return head;
    }
};


//https://leetcode.com/problems/remove-duplicates-from-sorted-list/
