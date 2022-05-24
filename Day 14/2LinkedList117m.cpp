class Solution
{
    public:
    Node *zigZag(Node* head)
    {
     // your code goes here
     bool f=true;
     Node* cur=head;
     while(cur->next){
         if(f){
             if(cur->data > cur->next->data){
                 int t=cur->data;
                 cur->data=cur->next->data;
                 cur->next->data=t;
             }
         }
         else{
             if(cur->data < cur->next->data){
                swap(cur->data, cur->next->data);
             }
         }
         cur=cur->next;
         f=!f;
     }
     return head;
    }
};


//https://www.geeksforgeeks.org/linked-list-in-zig-zag-fashion/
