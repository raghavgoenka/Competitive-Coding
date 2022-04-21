//https://practice.geeksforgeeks.org/problems/count-bst-nodes-that-lie-in-a-given-range/1#
int res=0;
 void solve(Node*root,int lb,int rb)
 {
     if(root==NULL){return;}
     
     if(root->data<lb){solve(root->right,lb,rb);return;}
     else if(root->data>rb){solve(root->left,lb,rb);return;}
     else if(root->data>=lb&&root->data<=rb){
         res++;
         solve(root->left,lb,rb);
         solve(root->right,lb,rb);
         return;
     }
     
     
 }
int getCount(Node *root, int l, int h)
{
  // your code goes here 
  res=0;
   solve(root,l,h);
   return res;
}