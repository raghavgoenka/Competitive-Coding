//https://leetcode.com/problems/binary-tree-paths/
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
    vector<string>res;
    
    void getPath(TreeNode* node,string path)
    {
        if(node==NULL){return;}
        path+= to_string(node->val);
        if(node->left==NULL&&node->right==NULL){res.push_back(path);return ;} //leaf node condition 
        path+="->";
        getPath(node->left,path);
        getPath(node->right,path);
        path.pop_back();
        if(path.size()>1)
        {path.pop_back();}
        }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==NULL){return res;}
        string temp="";
        getPath(root,temp);
        
        return res;
    }
};