//https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1#

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    
    int height(Node* node,int &dia)
    {
        if(node==NULL){return 0;}
        int a=height(node->left,dia);
         int b=height(node->right,dia);
       dia=max(dia,a+b);
        return max(a,b)+1;
    }
    int diameter(Node* root) {
        // Your code here
        int dia=1;
       height(root,dia);
        return dia;
    }
};