long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
  long long n1=0, n2=0, mod=1e9+7;
  
  while(l1 || l2){
      if(l1){
          n1 = (n1*10)%mod + l1->data;
          l1=l1->next;
      }
      if(l2){
          n2 = (n2*10)%mod + l2->data;
          l2=l2->next;
      }
  }
  
  return n1%mod * n2%mod;
  
}


//https://www.geeksforgeeks.org/multiply-two-numbers-represented-linked-lists/
