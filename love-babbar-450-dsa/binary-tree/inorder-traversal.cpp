//https://leetcode.com/problems/binary-tree-inorder-traversal/
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
//recursion
class Solution {
public:
    
        vector<int>v;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL){return v;}
  
 v=inorderTraversal(root->left);
        v.push_back(root->val);
 v=inorderTraversal(root->right);
 return v;
    }
};

//Iterative
class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        //code here
        vector<int>v;
        stack<Node*>st;
      Node* temp=root;
        while(true)
        {
            
            if(temp!=NULL){st.push(temp);temp=temp->left;}
            
            else{
                if(st.empty()==true){break;}
                temp=st.top();
                st.pop();
              
                v.push_back(temp->data);
                temp=temp->right;
            }
        }
        return v;
    }
};