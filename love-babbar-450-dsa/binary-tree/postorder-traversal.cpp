//https://leetcode.com/problems/binary-tree-postorder-traversal/
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
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL){return v;}
  
 v=postorderTraversal(root->left);
 v=postorderTraversal(root->right);
 v.push_back(root->val);
 return v;
    }
};
//iterative
class Solution{
    public:
    vector<int>v;
    vector<int> postOrder(Node* node) {
        
    vector<int> v;
        stack<Node*> st;
        st.push(node);
        while(!st.empty()){
            Node* temp=st.top();
            st.pop();
            v.push_back(temp->data);
            if(temp->left){
                st.push(temp->left);
            }
            if(temp->right){
                st.push(temp->right);
            }
           
        }
         reverse(v.begin(),v.end());
        return v;

    }
};