//https://practice.geeksforgeeks.org/problems/construct-tree-1/1
class Solution{
    public:
    map<int,int>mp;
    int index=0;
    Node* solveTree(int in[],int pre[],int l,int r)
    {
        if(l>r){return NULL;}
        Node* node=new Node(pre[index++]);
        if(l==r){return node;} // when left n right is not present;
        int mid=mp[node->data];
        node->left=solveTree(in,pre,l,mid-1);
        node->right=solveTree(in,pre,mid+1,r);
        return node;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        for(int i=0;i<n;i++)
        {
            mp[in[i]]=i;
        }
       Node* root= solveTree(in,pre,0,n-1);
        return root;
    }
};