//https://leetcode.com/problems/populating-next-right-pointers-in-each-node/


class Solution {
public:
    Node* connect(Node* root) {
        Node* t=root;
        while(t && t->left){
            Node* n=t;
            while(true){
                n->left->next=n->right;
                if(!n->next) break;
                n->right->next=n->next->left;
                n=n->next;
            }
            t=t->left;
        }
        return root;
    }
};
