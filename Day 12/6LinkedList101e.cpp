class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;
        ListNode* pre=NULL, *cur=head;
        
        while(cur){
            if(cur->val==val){
                if(!pre) head=cur->next;
                else pre->next=cur->next;
            }
            else pre=cur;
            cur=cur->next;
        }
        return head;
    }
};


//https://leetcode.com/problems/remove-linked-list-elements/
