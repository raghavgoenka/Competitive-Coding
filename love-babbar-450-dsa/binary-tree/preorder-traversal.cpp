//https://leetcode.com/problems/binary-tree-preorder-traversal/submissions/
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
    vector<int>v;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL){return v;}
  
  v.push_back(root->val);
 v=preorderTraversal(root->left);
 v=preorderTraversal(root->right);
 return v;
    }
};

//iterative
class Solution{
    public:
    vector<int> preOrder(Node* root)
    {
         vector<int> v;
        stack<Node*> st;
        st.push(root);
        while(!st.empty()){
            Node* temp=st.top();
            st.pop();
            v.push_back(temp->data);
             if(temp->right){
                st.push(temp->right);
            }
            if(temp->left){
                st.push(temp->left);
            }
           
           
        }
         
        return v;
    }
};