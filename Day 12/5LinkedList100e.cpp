class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node* temp=head;
        int z=0,o=0,t=0;
        while(temp!=NULL){
            if(temp->data==0) z++;
            else if(temp->data==1) o++;
            else t++;
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            if(z!=0){
                temp->data=0;
                z--;
            }
            else if(o!=0){
                temp->data=1;
                o--;
            }
            else if(t!=0){
                temp->data=2;
                t--;
            }
            temp=temp->next;
        }
        return head;
        
    }
};


//https://www.geeksforgeeks.org/sort-a-linked-list-of-0s-1s-or-2s/
