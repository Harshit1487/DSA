class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* t=head;
        int l=0;
        
        while(t){
            l++;
            t=t->next;
        }
        l--;
        
        int ans=0;
        while(head){
            if(head->val)
                ans+=pow(2,l);
            l--;
            head=head->next;
        }
        
        return ans;
    }
};


//https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
