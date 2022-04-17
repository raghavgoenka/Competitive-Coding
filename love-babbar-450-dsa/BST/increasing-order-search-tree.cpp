//https://leetcode.com/problems/increasing-order-search-tree/
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
    TreeNode* head=NULL,*prev=NULL;
    void solve(TreeNode*node)
    {
        if(node==NULL){return;}
        solve(node->left);
        if(head==NULL){head=node;prev=node;}
        else{
         node->left=NULL;
         prev->right=node;
         prev=node;
       }
        solve(node->right);
        return;
    }
    TreeNode* increasingBST(TreeNode* root) {
        solve(root);
        return head;
    }
};