// **Morris Traversal** time cmplexity is O(N) and space complexity is O(1) which makes it efficient than any other traversal.

//Morris Traversal for inorder and preorder
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
//inorder
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int>v;
        TreeNode*cur=root,*prev=NULL;
        while(cur!=NULL)
        {
            if(cur->left==NULL){v.push_back(cur->val);
             cur=cur->right;                   
            }
            else if(cur->left!=NULL)
            {
                prev=cur->left;
                while(prev->right!=NULL&&prev->right!=cur)
                {
                    prev=prev->right;
                }
                if(prev->right==NULL)
                {
                     prev->right=cur;
                    cur=cur->left;
                }
                else{
                    prev->right=NULL;
                    v.push_back(cur->val);
                    cur=cur->right;
                }
            }
        }
       return v;
    }
};

//preorder
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
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int>v;
        TreeNode*cur=root,*prev=NULL;
        while(cur!=NULL)
        {
            if(cur->left==NULL){v.push_back(cur->val);
             cur=cur->right;                   
            }
            else if(cur->left!=NULL)
            {
                prev=cur->left;
                while(prev->right!=NULL&&prev->right!=cur)
                {
                    prev=prev->right;
                }
                if(prev->right==NULL)
                {
                     prev->right=cur;
                    v.push_back(cur->val);
                    cur=cur->left;
                }
                else{
                    prev->right=NULL;

                    cur=cur->right;
                }
               }
              }
       return v;
    }
};