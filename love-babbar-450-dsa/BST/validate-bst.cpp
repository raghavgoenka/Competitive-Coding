//https://leetcode.com/problems/validate-binary-search-tree/
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
    long int c=1,last_val=LONG_MIN;
    void checkBST(TreeNode*root)
    {
        if(root==NULL){return ;}
        checkBST(root->left);
        if(last_val>=root->val){c=0;}
        last_val=root->val;
        checkBST(root->right);
    }
    bool isValidBST(TreeNode* root) {
        checkBST(root);
        return c;
    }
};