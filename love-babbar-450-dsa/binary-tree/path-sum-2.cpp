//https://leetcode.com/problems/path-sum-ii/submissions/
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
    vector<vector<int>>res;
     void path(TreeNode* node,vector<int>temp,int sum)
    {
        if(node==NULL){return ;}
        temp.push_back(node->val);
            sum+=node->val;
   
        if(sum==p&&node->left==NULL&&node->right==NULL){res.push_back(temp);return ;}
        path(node->left,temp,sum);
        path(node->right,temp,sum);
        return ;
    }
    vector<vector<int>> pathSum(TreeNode* root, int t) {
        p=t;
        vector<int>temp;
        path(root,temp,0);
        return res;
    }
};