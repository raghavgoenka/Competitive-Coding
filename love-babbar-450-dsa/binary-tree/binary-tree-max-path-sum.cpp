//https://leetcode.com/problems/binary-tree-maximum-path-sum/
//https://practice.geeksforgeeks.org/problems/maximum-path-sum-from-any-node/1#


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
    int path_sum(TreeNode* node,int &mx)
    {
        if(node==NULL){return 0;}
        int left=max(0,path_sum(node->left,mx));
        int right=max(0,path_sum(node->right,mx));
        mx=max(mx,node->val+left+right);
        
        return node->val+max(left,right); 
        // check right and left subtree sum and max sum from that to choose the max sum path 
    }
    int maxPathSum(TreeNode* root) {
        int mx=INT_MIN;
        path_sum(root,mx);
        return mx;
    }
};