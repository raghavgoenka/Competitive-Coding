//https://practice.geeksforgeeks.org/problems/binary-tree-to-bst/1
//using inorder
class Solution{
  public:
  void solve(vector<int>&in,Node*root)
{
    if(root==NULL){return;}
    solve(in,root->left);
    in.push_back(root->data);
    solve(in,root->right);
}
Node* buildTree(vector<int>nums,int l,int r)
    {   
        
        if(l>r){return NULL;}
        int mid=l+(r-l)/2;
        Node *root=new Node(nums[mid]);
        root->left= buildTree(nums,l,mid-1);
        root->right= buildTree(nums,mid+1,r);
        return root;
    }
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int>in;
        solve(in,root);
     	sort(in.begin(),in.end());
      return buildTree(in,0,in.size()-1);
    }
};
