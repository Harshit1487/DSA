class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* t = head;
        int l=0;
        
        while(t!=NULL){
            l++;
            t=t->next;
        }
        
        int n=l/2;
        while(n--)
            head=head->next;
        
        return head;
    }
};


//https://leetcode.com/problems/middle-of-the-linked-list/
