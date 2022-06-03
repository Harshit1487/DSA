//https://practice.geeksforgeeks.org/problems/min-distance-between-two-given-nodes-of-a-binary-tree/1


class Solution{
    public:
    
    Node* lca(Node* root, int a, int b){
        if(!root) return NULL;
        if(root->data==a || root->data==b) return root;
        Node* l = lca(root->left, a, b);
        Node* r = lca(root->right, a, b);
        
        if(!l) return r;
        if(!r) return l;
        return root;
    }
    
    int dis(Node* root, int n, int d){
        if(!root) return -1;
        if(root->data==n) return d;
        int l = dis(root->left, n, d+1);
        if(l!=-1) return l;
        return dis(root->right, n, d+1);
    }
    
    int findDist(Node* root, int a, int b) {
        // Your code here
        Node* l = lca(root, a, b);
        return dis(l, a, 0) + dis(l, b, 0);
    }
};
