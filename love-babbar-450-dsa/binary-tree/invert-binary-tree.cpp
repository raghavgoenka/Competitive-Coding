//https://leetcode.com/problems/invert-binary-tree/submissions/
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
    
    TreeNode* invertTree(TreeNode* root) 
    {
         if(!root)
            return root;
        TreeNode* left_part=invertTree(root->left);
        TreeNode* right_part=invertTree(root->right);
        root->left=right_part;
        root->right=left_part;
        return root;
    }
};