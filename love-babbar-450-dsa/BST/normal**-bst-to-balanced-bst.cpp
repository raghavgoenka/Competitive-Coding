//https://practice.geeksforgeeks.org/problems/normal-bst-to-balanced-bst/1/

//for o(1) space convet bst to sorted linked list and then convert bst fromt linked list
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
Node* buildBalancedTree(Node* root)
{
	// Code here
	vector<int>in;
	solve(in,root);
   return buildTree(in,0,in.size()-1);
}