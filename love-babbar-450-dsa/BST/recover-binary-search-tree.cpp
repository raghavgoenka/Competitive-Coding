//https://leetcode.com/problems/recover-binary-search-tree/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode*a=NULL,*b=NULL,*prev;
    void solve(TreeNode*root,long int lb,long int rb)
    {
          
        if(root==NULL){return;}
       
       
        solve(root->left,lb,root->val);
         if(prev!=NULL&&(prev->val>root->val)){
          
            if(a==NULL){a=prev;b=root;}
            else {b=root;}
          }
        prev=root;
        solve(root->right,root->val,rb);
    }
    void recoverTree(TreeNode* root) {
        solve(root,LONG_MIN,LONG_MAX);
     
        swap(a->val,b->val);
        
    }
};