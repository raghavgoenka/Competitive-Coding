//https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1
class Solution {
public:
    int height(Node* node)
    {
        if(node==NULL){return 0;}
        int a=height(node->left);
        if(a==-1){return -1;}
        int b=height(node->right);
        if(b==-1){return -1;}
        if(abs(b-a)>1){return -1;}
        return max(a,b)+1;
    }
    bool isBalanced(Node* node) {

        return height(node)!=-1;
    }
};