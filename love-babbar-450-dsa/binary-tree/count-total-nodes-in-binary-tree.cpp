//https://leetcode.com/problems/count-complete-tree-nodes/submissions/
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
    int countNodes(TreeNode* root) {
        if(root==NULL){return 0;}
        
        int left=leftHeight(root);
        int right=rightHeight(root);
        if(left==right){return (1<<left)-1; }
        
        return 1+countNodes(root->left)+countNodes(root->right);
    }
    
    int leftHeight(TreeNode* root)
    {
        int c=0;
        while(root!=NULL)
        {   c++;
            root=root->left;
        }
        return c;
    }
    int rightHeight(TreeNode* root)
    {
        int c=0;
        while(root!=NULL)
        { c++;
            root=root->right;
        }
        return c;
    }
};