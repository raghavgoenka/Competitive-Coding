//https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1#
Node*res=NULL;
void solve(Node*root,int lb,int rb)
{
    if(root==NULL){return;}
    else if(root->data<lb){solve(root->right,lb,rb);}
    else if(root->data>rb){solve(root->left,lb,rb);}
    else if(root->data>=lb&&root->data<=rb){res=root;return;}
    
}
Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
    int l=min(n1,n2);
    int h=max(n1,n2);
    solve(root,l,h);
    return res;
}