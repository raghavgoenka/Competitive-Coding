//https://leetcode.com/problems/path-sum/
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
    int p;
    void path(TreeNode* node,int sum)
    {
        if(node==NULL){return ;}
        sum+=node->val;
    
        if(sum==p&&node->left==NULL&&node->right==NULL){p=INT_MIN;return ;}
        path(node->left,sum);
        path(node->right,sum);
        return ;
    }
    bool hasPathSum(TreeNode* root, int t) {
        p=t;
        path(root,0);
        
        return p==INT_MIN?1:0;
    }
};