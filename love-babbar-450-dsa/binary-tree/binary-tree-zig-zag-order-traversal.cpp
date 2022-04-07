//https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>>v;
           
        if(root==NULL){return v;}
      queue<TreeNode*>st;
      st.push(root);
        int f=1;
      while(!st.empty())
      {
          int s=st.size();
           vector<int>t(s);
          for(int i=0;i<s;i++)
          {
              TreeNode* temp=st.front();
              st.pop();
               int index=f?i:s-1-i;
              t[index]=temp->val;
             
             if(temp->left){st.push(temp->left);}
              if(temp->right){st.push(temp->right);}
            
             
          }
          f=f^1;
          
          v.push_back(t);
          
      }
      return v;
    }
};