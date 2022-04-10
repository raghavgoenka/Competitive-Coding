//https://leetcode.com/problems/sum-root-to-leaf-numbers/

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
    long long res=0;
 void getPath(TreeNode* node,string path)
    {
        if(node==NULL){return;}
        path+= to_string(node->val);
        if(node->left==NULL&&node->right==NULL){long long t=stol(path);res+=t;return ;} //leaf node condition 
        getPath(node->left,path);
        getPath(node->right,path);
       
    }   
    int sumNumbers(TreeNode* root) {
        if(root==NULL){return res;}
        string temp="";
        getPath(root,temp);
        
        return res;
    }
};