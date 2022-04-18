//https://practice.geeksforgeeks.org/problems/find-k-th-smallest-element-in-bst/1#


//Morris Traversal for kth smallest element in BST******


class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
       int res=-1;
        TreeNode*cur=root,*prev=NULL;
        while(cur!=NULL)
        {
            if(cur->left==NULL)
            {k--;
             if(k==0){res=cur->val;}
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
                     if(k==0){res=cur->val;}
                    cur=cur->right;
                }
               }
              }
       return res;
    }
};

//simple inorder approach
class Solution {
  public:
    // Return the Kth smallest element in the given BST
    int c=0,res=-1;
    void solve(Node*root)
    {
        if(root==NULL){return ;}
        solve(root->left);
        c--;
        if(c==0){res=root->data;}
        solve(root->right);
        return ;
    }
    int KthSmallestElement(Node *root, int K) {
        // add code here.
        c=K;
        solve(root);
        return res;
    }
};