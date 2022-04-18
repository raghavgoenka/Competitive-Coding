//https://leetcode.com/problems/symmetric-tree/
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
    bool solve(TreeNode*root1,TreeNode* root2)
    {
        if(root1==NULL||root2==NULL){return root1==root2;}
        
        else if(root1->val!=root2->val){return 0;}
        
        int a=solve(root1->left,root2->right);
        int b=solve(root1->right,root2->left);
        return a&b;
    }
    bool isSymmetric(TreeNode* root) {
        int a=solve(root->left,root->right);
        return a;
    }
};