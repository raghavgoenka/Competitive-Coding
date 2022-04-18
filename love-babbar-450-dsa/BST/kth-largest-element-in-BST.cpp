//https://practice.geeksforgeeks.org/problems/kth-largest-element-in-bst/1#
class Solution
{
    public:
    int findNodes(Node* root)
    {
        if(root==NULL){return 1;}
        
        int l=findNodes(root->left);
        int r=findNodes(root->right);
        return l+r;
    }
    int kthLargest(Node *root, int k)
    {
        //Your code here
        int n=findNodes(root);
        n=n-1;
        k=n-k+1;
        int res=-1;
        Node*cur=root,*prev=NULL;
        while(cur!=NULL)
        {
            if(cur->left==NULL)
            {k--;
             if(k==0){res=cur->data;}
             cur=cur->right;                   
            }
            else if(cur->left!=NULL)
            {
                prev=cur->left;
                while(prev->right!=NULL&&prev->right!=cur)
                {
                    prev=prev->right;
                }
                if(prev->right==NULL)
                {
                     prev->right=cur;
                    cur=cur->left;
                }
                else{
                    prev->right=NULL;
                    k--;
                     if(k==0){res=cur->data;}
                    cur=cur->right;
                }
               }
              }
       return res;
        
    }
};