//https://leetcode.com/problems/maximum-sum-bst-in-binary-tree/
//https://practice.geeksforgeeks.org/problems/largest-bst/1#

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
class data1{
    public:
    int maxi,mini,isBst,sum;
};
  data1 largestBST(TreeNode*root,int &maxsum)
    {
        if(root==NULL){return {INT_MIN,INT_MAX,1,0};}
        
        data1 left=largestBST(root->left,maxsum);
        data1 right=largestBST(root->right,maxsum);
        data1 d;
        d.sum=left.sum+right.sum+root->val;
        d.maxi=max(root->val,right.maxi);
        d.mini=min(root->val,left.mini);
        if(left.isBst&&right.isBst&&((root->val>left.maxi)&&(root->val<right.mini))){d.isBst=1;}
        else{d.isBst=0;}
        
        if(d.isBst==1){maxsum=max(maxsum,d.sum);}
        
        return d;
    }
class Solution {
public:
    int maxSumBST(TreeNode* root) {
        int maxsum=0;
    	data1 d=largestBST(root,maxsum);
    	return maxsum;
    }
};