class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* f=head;
        ListNode* s=head;
        
        while(f && f->next){
            f=f->next->next;
            s=s->next;
            if(f==s) return true;
        }
        return false;
    }
};


//https://leetcode.com/problems/linked-list-cycle/
