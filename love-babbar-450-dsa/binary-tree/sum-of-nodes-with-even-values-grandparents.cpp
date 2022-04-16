//https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent/
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
//Recursive solution sending parent and its grandParent in each recursive call
class Solution {
public:
    int sum=0;
    void grandParent(TreeNode*root,int parent,int gp)
    {
         if(root==NULL){return;}
         if(!(gp&1)){sum+=root->val;}
        grandParent(root->left,root->val,parent);
        grandParent(root->right,root->val,parent);
    }
    int sumEvenGrandparent(TreeNode* root) {
       grandParent(root,-1,-1);
        return sum;
    }
};

//SImple Iterative Solution
class Solution {
    
public:
    
    int sumEvenGrandparent(TreeNode* root) {
        
        queue<TreeNode*>st ;
        st.push(root) ;
        int ans = 0 ;
        
        while(!st.empty())
        {
                TreeNode* temp = st.front() ;
                st.pop() ;
                
                if(temp->val%2==0)
                {
                    cout<<"Temp val :- "<<temp->val<<endl;
              
                    //ll
                    if(temp->left!=NULL&&temp->left->left!=NULL)
                        ans+=temp->left->left->val ;
                    
                    //lr
                    if(temp->left!=NULL&&temp->left->right!=NULL)
                        ans+=temp->left->right->val ;
                    
                    //rl
                    if(temp->right!=NULL&&temp->right->left!=NULL)
                        ans+=temp->right->left->val ;
                    
                    //rr
                    if(temp->right!=NULL&&temp->right->right!=NULL)
                        ans+=temp->right->right->val ;
                    
                
                    }
                    if(temp->left)
                        st.push(temp->left);
                    
                    if(temp->right)
                        st.push(temp->right);
            
        }
        
        return ans ;
    }
    
};