//https://practice.geeksforgeeks.org/problems/populate-inorder-successor-for-all-nodes/1#
class Solution
{
public:
     Node*prev=NULL;
    void populateNext(Node *root)
    {
        //code here
         if(!root)
       return ;
       populateNext(root->left);
       if(prev)
       prev->next=root;
       prev=root;
       populateNext(root->right);
    }
};