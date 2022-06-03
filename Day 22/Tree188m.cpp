//https://practice.geeksforgeeks.org/problems/count-bst-nodes-that-lie-in-a-given-range/1


class Solution{
public:
    int getCount(Node *root, int l, int h)
    {
      // your code goes here   
      if(!root) return 0;
      
      if(root->data >=l && root->data <= h)
        return getCount(root->left, l, h) + getCount(root->right, l, h) + 1;
      
      if(root->data < l)
        return getCount(root->right, l, h);
        
      if(root->data > h)
        return getCount(root->left, l, h);
    }
};
