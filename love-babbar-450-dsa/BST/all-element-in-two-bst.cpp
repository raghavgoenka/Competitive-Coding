//https://leetcode.com/problems/all-elements-in-two-binary-search-trees/
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
     vector<int> res;
     void print(TreeNode *root)
     {
          if (!root)
               return;
          res.push_back(root->val);
          print(root->left);
          print(root->right);
     }
     vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
     {
          print(root1);
          print(root2);
          sort(res.begin(), res.end());
          return res;
     }
};