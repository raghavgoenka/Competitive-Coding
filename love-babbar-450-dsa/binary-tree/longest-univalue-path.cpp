//https://leetcode.com/problems/longest-univalue-path/

/**k
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
    int uniPath(TreeNode* node)
    {
        if(node==NULL){return 0; }
        
      int left= uniPath(node->left);
      int right=uniPath(node->right);
        
        int a=0,b=0;
        if(node->left!=NULL&&node->val==node->left->val){a=left+1;}
        if(node->right!=NULL&&node->val==node->right->val){b=right+1;}
        res=max(res,(a+b));
        return max(a,b);
        
    }
    int longestUnivaluePath(TreeNode* root) {
        
        uniPath(root);
        return res;
    }
};