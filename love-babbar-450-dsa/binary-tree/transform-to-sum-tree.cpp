//https://practice.geeksforgeeks.org/problems/transform-to-sum-tree/1#
class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int  sumTree(Node*node)
    {
        if(node==NULL){return 0;}
       if(node->left==NULL&&node->right==NULL){int a=node->data;node->data=0;return a;}
        
        int l=sumTree(node->left);
        int r=sumTree(node->right);
        int sum=l+r;
        int p=node->data;
        node->data=l+r;
        
        return node->data+p;
        
        
    }
    void toSumTree(Node *node)
    {
        // Your code here
      
        sumTree(node);
    }
};