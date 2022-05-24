Node* findmid(Node* head){
    Node* s=head, * f=head;
    while(f && f->next){
        s=s->next;
        f=f->next->next;
    }
    return s;
}

Node* reverse(Node* head){
    Node* cur=head, * pre=NULL, * nex;
    while(cur){
        nex=cur->next;
        cur->next=pre;
        pre=cur;
        cur=nex;
    }
    return pre;
}
void reorderList(Node* head) {
    // Your code here
    if(!head || !head->next) return;
    
    Node* mid = findmid(head);
    Node* n2 = reverse(mid);
    Node* n1 = head;
    Node* t;
    while(n2->next){
        t=n1->next;
        n1->next=n2;
        n1=t;
        
        t=n2->next;
        n2->next=n1;
        n2=t;
    }
    
}


//https://www.geeksforgeeks.org/rearrange-a-given-linked-list-in-place/
