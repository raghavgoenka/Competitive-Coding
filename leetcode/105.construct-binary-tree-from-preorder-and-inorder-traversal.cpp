/*
 * @lc app=leetcode id=105 lang=cpp
 *
 * [105] Construct Binary Tree from Preorder and Inorder Traversal
 */

// @lc code=start
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
auto speed=[]()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
class Solution {
    
public:
     int index=0;
      unordered_map<int,int>mp;
public:
     TreeNode* solve(vector<int>& pre, vector<int>& in,int l,int r)
     {
         if(l>r){return NULL;}
         TreeNode* ans=new TreeNode(pre[index++]);
         if(l==r){return ans;}
         int mid=mp[ans->val];
         ans->left=solve(pre,in,l,mid-1);
         ans->right=solve(pre,in,mid+1,r);
        return ans; 
     }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
     int n=inorder.size();
        for(int i=0;i<n;i++){mp[inorder[i]]=i;}
        TreeNode* root=solve(preorder,inorder,0,n-1);
        return root;
    }
};
// @lc code=end

