//https://practice.geeksforgeeks.org/problems/k-sum-paths/1/#

class Solution{
  public:
 
   int p,res=0;
     void path(Node* node,vector<int> v)
    {
        if(node==NULL){return ;}
        v.push_back(node->data);
        path(node->left,v);
        path(node->right,v);
        int sum=0;
        for(int k=v.size()-1;k>=0;k--)
        {
            sum+=v[k];
            if(sum==p){res++;}
        }
        return ;
    }
    int sumK(Node *root,int k)
    {
        vector<int>v;
        p=k;
        path(root,v);
        return res;
    }
};