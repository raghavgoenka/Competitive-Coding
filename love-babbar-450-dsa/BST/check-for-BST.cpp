//https://practice.geeksforgeeks.org/problems/check-for-bst/1#
class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    int c=1,last_val=INT_MIN;
    void checkBST(Node*root)
    {
        if(root==NULL){return ;}
        checkBST(root->left);
        if(last_val>=root->data){c=0;}
        last_val=root->data;
        checkBST(root->right);
    }
    bool isBST(Node* root) 
    {
        // Your code here
        checkBST(root);
        return c;
        
    }
};