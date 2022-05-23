class Solution {
public:
    ListNode* reverseList(ListNode* head) {
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
};


//https://leetcode.com/problems/reverse-linked-list/
