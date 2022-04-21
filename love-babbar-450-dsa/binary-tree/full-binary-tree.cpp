//https://practice.geeksforgeeks.org/problems/full-binary-tree/1/#
int solve(Node* root)
 {
     
     if(root==NULL){return 1;}
     else if((root->left==NULL&&root->right!=NULL)||(root->left!=NULL&&root->right==NULL)){return 0;}

   
     int a=solve(root->left);
     int b=solve(root->right);
    
     return a&b;
 }
bool isFullTree (struct Node* root)
{
//add code here.
  int res=solve(root);
  return res;
}
