class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node* even=NULL, * odd=NULL, * e=NULL, * o=NULL;
        while(head){
            if(head->data%2==0){
                if(!even){
                    even=head;
                    e=head;
                }
                else{
                    e->next=head;
                    e=e->next;
                }
            }
            else{
                if(!odd){
                    odd=head;
                    o=head;
                }
                else{
                    o->next=head;
                    o=o->next;
                }
            }
            head=head->next;
        }
        
        if(e) e->next=odd;
        if(o) o->next=NULL;
        if(even) return even;
        else return odd;
    }
};


//https://www.geeksforgeeks.org/segregate-even-and-odd-elements-in-a-linked-list/
