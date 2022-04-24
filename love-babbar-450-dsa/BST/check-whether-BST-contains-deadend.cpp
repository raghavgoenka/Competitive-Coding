//https://practice.geeksforgeeks.org/problems/check-whether-bst-contains-dead-end/1#
/*The Node structure is
struct Node {
int data;
Node * right, * left;
};*/

/*You are required to complete below method */
int solve(Node*root,int lb,int rb)
{
    if(root==NULL){return 0;}
    else if(lb==rb){return 1;}
    int a=solve(root->left,lb,root->data-1);
    int b=solve(root->right,root->data+1,rb);
    return a|b;
}

bool isDeadEnd(Node *root)
{
    //Your code here
    int res=solve(root,1,INT_MAX);
    return res;
}