//https://practice.geeksforgeeks.org/problems/maximum-sum-of-non-adjacent-nodes/1/
class Solution{
  public:
    //Function to return the maximum sum of non-adjacent nodes.
    pair<int,int> solve(Node*root)
    {
        if(root==NULL)
        {
            pair<int,int>p;
            p={0,0};
            return p;
        }
        pair<int,int>l=solve(root->left);
        pair<int,int>r=solve(root->right);
        pair<int,int>res;
        res.first=root->data+l.second+r.second;
        res.second=max(l.first,l.second)+max(r.first,r.second);
        return res;
    }
    int getMaxSum(Node *root) 
    {
        // Add your code here
        pair<int,int>ans=solve(root);
        
        return max(ans.first,ans.second);
    }
};