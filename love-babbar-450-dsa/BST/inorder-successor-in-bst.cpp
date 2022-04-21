//https://practice.geeksforgeeks.org/problems/inorder-successor-in-bst/1#
class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        
        int k=x->data;
        Node* cur=root,*res;
           while(cur!=NULL)
           {
               if(k>=cur->data){cur=cur->right;}
               else if(cur->data>k){
                   res=cur;
                   cur=cur->left;
               }
           }
           return res;
           
    }
};