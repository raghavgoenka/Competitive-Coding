//https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/
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
    long int first=LONG_MAX,second=LONG_MAX;
    int solve(TreeNode*root)
    {
        if(root->left==NULL&&root->right==NULL){return root->val;}
        
        int a=solve(root->left);
        int b=solve(root->right);
       
        if(a<first){second=first;first=a;}
        else if(a<second&&a!=first){second=a;}
        
        if(b<first){second=first;first=b;}
        else if(b<second&&b!=first){second=b;}
        
        return min(a,b);
    
    }
    int findSecondMinimumValue(TreeNode* root) {
          solve(root);
     
        return LONG_MAX==second?-1:second;
    }
};