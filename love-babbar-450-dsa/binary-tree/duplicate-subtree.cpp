//https://leetcode.com/problems/find-duplicate-subtrees/submissions/
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
    vector<TreeNode*>v;
    map<string ,int>mp;
   
    string getDuplicate(TreeNode*root)
    {
       if(root==NULL){return "N";}
        
       string s=to_string(root->val)+"."+getDuplicate(root->left) 
        +"."+getDuplicate(root->right);
        
        mp[s]++;
        if(mp[s]==2){v.push_back(root);}
        return s;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        getDuplicate(root);
        return v;
    }
};