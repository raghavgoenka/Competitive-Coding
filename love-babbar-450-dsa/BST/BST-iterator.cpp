//https://leetcode.com/problems/binary-search-tree-iterator/
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

//using morris traversal O(1)space
class BSTIterator {
public:
    TreeNode*temp=NULL;
    int morris(){
        int res;
        while(temp!=NULL)
        {
            if(temp->left==NULL)
            {
                res=temp->val;
                temp=temp->right;
                return res;
            }
            else if(temp->left!=NULL){
                TreeNode* prev=temp->left;
                while(prev->right!=NULL&&prev->right!=temp)
                {
                    prev=prev->right;
                }
                if(prev->right==NULL)
                {
                     prev->right=temp;
                    temp=temp->left;
                }
                else{
                    prev->right=NULL;
                    res=temp->val;
                    temp=temp->right;
                    return res;
                }
            }   
        }
        return res;
    }
    BSTIterator(TreeNode* root) {
        temp=root;
    }
    
    int next() {
        int res=morris();
       return res;
    }
    
    bool hasNext() {
        if(temp==NULL){return false;}
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */