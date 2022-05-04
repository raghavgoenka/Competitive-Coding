//https://practice.geeksforgeeks.org/problems/largest-bst/1#
//https://leetcode.com/problems/maximum-sum-bst-in-binary-tree/
class data{
    public:
    int maxi,mini,isBst,size;
};
class Solution{
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    data largestBST(Node*root,int &maxsize)
    {
        if(root==NULL){return {INT_MIN,INT_MAX,1,0};}
        
        data left=largestBST(root->left,maxsize);
        data right=largestBST(root->right,maxsize);
        data d;
        d.size=left.size+right.size+1;
        d.maxi=max(root->data,right.maxi);
        d.mini=min(root->data,left.mini);
        if(left.isBst&&right.isBst&&((root->data>left.maxi)&&(root->data<right.mini))){d.isBst=1;}
        else{d.isBst=0;}
        
        if(d.isBst==1){maxsize=max(maxsize,d.size);}
        
        return d;
    }
    
    int largestBst(Node *root)
    {
    	//Your code here
    	int maxsize=0;
    	data d=largestBST(root,maxsize);
    	return maxsize;
    }
};