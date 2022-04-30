//https://practice.geeksforgeeks.org/problems/binary-tree-to-cdll/1#

class Solution
{
  public:
    //Function to convert binary tree into circular doubly linked list.
     Node* head=NULL,*prev=NULL;
    void treetoCDll(Node* root)
    {
        if(root==NULL){return;}
        treetoCDll(root->left);
        if(head==NULL){head=root;prev=root;}
        else{prev->right=root;
            prev->right->left=prev;
            prev=prev->right;
        }
        treetoCDll(root->right);
        prev->right=head;
        head->left=prev;
        return ;
    }
    Node *bTreeToCList(Node *root)
    {
       treetoCDll(root);
       return head;
    }
};
