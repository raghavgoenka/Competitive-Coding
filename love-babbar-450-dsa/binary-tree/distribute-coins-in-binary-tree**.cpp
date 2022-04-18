//https://leetcode.com/problems/distribute-coins-in-binary-tree/
//https://practice.geeksforgeeks.org/problems/distribute-candies-in-a-binary-tree/0/?page=3&query=page3#
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
    int res=0;
    int  solve(TreeNode* root)
    {
        if(root==NULL){return 0;}
        
        int l=solve(root->left);
        int r=solve(root->right);
        res+=abs(l)+abs(r);
        return (root->val)-1+(l+r);
    }
    int distributeCoins(TreeNode* root) {
        solve(root);
        return res;
    }
};