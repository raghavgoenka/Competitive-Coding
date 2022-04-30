//https://practice.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/1/#
int p=0,n;
Node* solve(Node*root)
{
    if(root==NULL){return NULL;}
    if(root->data==n){return root;}
    Node*left=solve(root->left);
    Node*right=solve(root->right);
    if(left==NULL&&right!=NULL){p--;
        if(p<=0){p=INT_MAX;return root;}
        return right;
    }
    else if(left!=NULL&&right==NULL){p--;
        if(p<=0){p=INT_MAX;return root;}
        return left;
    }
    return NULL;
}
int kthAncestor(Node *root, int k, int node)
{
    // Code here
    p=k;n=node;
    Node*res=solve(root);
    if(res!=NULL&&res->data!=node){return res->data;}
    return -1;
}