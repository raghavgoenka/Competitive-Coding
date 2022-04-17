//https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1#
int minValue(Node* root) {
    // Code here
    if(root==NULL){return -1;}
     if(root->left==NULL){return root->data;}
    
    int mn=minValue(root->left);
    
    return mn;
}