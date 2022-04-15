//https://practice.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1#
map<int,int>mp;

Node* solveTree(int ino[],int post[],int in,int ine,int po,int poe)
{
    if(in>ine||po>poe){return NULL;}
    Node* node=new Node(post[poe]);
    int root=mp[post[poe]];
    int left=root-in;
    node->left=solveTree(ino,post,in,root-1,po,po+left-1);
    node->right=solveTree(ino,post,root+1,ine,po+left,poe-1);
    return node;
}
Node *buildTree(int in[], int post[], int n) {
    // Your code here
     for(int i=0;i<n;i++)
        {
            mp[in[i]]=i;
        }
        
       Node* root= solveTree(in,post,0,n-1,0,n-1);
        return root;
}


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
    map<int,int>mp;

TreeNode* solveTree(vector<int>&ino,vector<int>&post,int in,int ine,int po,int poe)
{
    if(in>ine||po>poe){return NULL;}
    TreeNode* node=new TreeNode(post[poe]);
    int root=mp[post[poe]];
    int left=root-in;
    node->left=solveTree(ino,post,in,root-1,po,po+left-1);
    node->right=solveTree(ino,post,root+1,ine,po+left,poe-1);
    return node;
}
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        for(int i=0;i<in.size();i++)
        {
            mp[in[i]]=i;
        }
        
       TreeNode* root= solveTree(in,post,0,in.size()-1,0,post.size()-1);
        return root;
    }
};