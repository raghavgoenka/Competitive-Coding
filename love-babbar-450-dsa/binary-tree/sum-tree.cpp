//https://practice.geeksforgeeks.org/problems/sum-tree/1#
class Solution
{
    public:
    
    int sumTree(Node*root,int sum,int &c){
        if(root==NULL){return 0;}
        
        if(root->left==NULL&&root->right==NULL){return root->data;}
        int l=sumTree(root->left,sum,c);
        int r=sumTree(root->right,sum,c);
         sum=l+r;
        if(sum!=root->data){c=0;}
        else{root->data+=sum;}
        
        return root->data;
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         int c=1;
         sumTree(root,0,c);
         return c;
    }
};