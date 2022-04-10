//https://leetcode.com/problems/construct-string-from-binary-tree/
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
    void pre(TreeNode*node,string &s)
    {
        if(node==NULL){return ;}
        cout<<node->val<<" ";
        s+="("+to_string(node->val);
        if(node->left==NULL&&node->right!=NULL){s+="()";}
        pre(node->left,s);
        pre(node->right,s);
        s+=")";
    }
    string tree2str(TreeNode* root) {
        string s="";
        
        pre(root,s);
        return s.substr(1,s.size()-2);
    }
};