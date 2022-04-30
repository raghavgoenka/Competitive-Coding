//https://practice.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1#
//https://leetcode.com/problems/flatten-binary-tree-to-linked-list/
//******IMP CONCEPT********
//Morris Traversal O(1) space  tree traversal technique
class Solution
{
    public:
    void flatten(Node *root)
    { //morris Traversal
        Node* cur=root,*prev=NULL;
         while(cur!=NULL)
         {  if(cur->left!=NULL)
             { prev=cur->left;
                 while(prev->right!=NULL)
                 {
                     prev=prev->right;
                 }
                 prev->right=cur->right;
                
                 cur->right=cur->left;
                 cur->left=NULL;
             }
             cur=cur->right;
        }
    }
};
//recursive solution
class Solution
{
    public:
    Node* prev=NULL;
    void flatten(Node *root)
    {   //code here
        if(root==NULL){return ;}
        flatten(root->right);
        flatten(root->left);
        
        root->right=prev;
        root->left=NULL;
        prev=root;
    }
};

//stack approach
class Solution
{  public:
     void flatten(Node *root)
     {
        stack<Node*>st;
        st.push(root);
        while(!st.empty())
        {
            Node* cur=st.top();
            st.pop();
            
            if(cur->right!=NULL){st.push(cur->right);}
            if(cur->left!=NULL){st.push(cur->left);}
           if(!st.empty()) {cur->right=st.top();}
           cur->left=NULL;
        }
    }
};
