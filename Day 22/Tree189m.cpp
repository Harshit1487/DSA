//https://practice.geeksforgeeks.org/problems/preorder-to-postorder4423/1


Node* solve(int pre[], int& l, int h, int s){
    if(l>=s || pre[l]>h) return NULL;
    
    Node* root = newNode(pre[l++]);
    root->left = solve(pre, l, root->data, s);
    root->right = solve(pre, l, h, s);
    
    return root;
}

Node* post_order(int pre[], int size)
{
    //code here
    if(!size) return NULL;
    int i=0;
    Node* res = solve(pre, i, INT_MAX, size); 
    return res;
}
