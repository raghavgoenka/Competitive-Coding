//https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1

class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node==NULL){return 0;}
        
        int a=height(node->left);
        int b=height(node->right);
        return max(a,b)+1;
    }
};