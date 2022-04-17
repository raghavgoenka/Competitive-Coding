//https://practice.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1#
Node* insert(Node* root, int key) {
    // Your code here
    if(root==NULL){return new Node(key);}
    
    if(root->data>key){root->left=insert(root->left,key);}
    
    if(root->data<key){root->right=insert(root->right,key);}
    
    return root;
}