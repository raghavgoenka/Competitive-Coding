//https://practice.geeksforgeeks.org/problems/binary-tree-to-dll/1
class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it
    Node* head=NULL,*prev=NULL;
    void treetoDll(Node* root)
    {
        if(root==NULL){return;}
        treetoDll(root->left);
        if(head==NULL){head=root;prev=root;}
        else{prev->right=root;
            prev->right->left=prev;
            prev=prev->right;
        }
        treetoDll(root->right);
        return ;
    }
    
    Node * bToDLL(Node *root)
    {
        // your code here
        treetoDll(root);
        return head;
    }
};

//Iterative
class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it
    Node* head=NULL,*prev=NULL;
   Node * bToDLL(Node *root)
    {
       stack<Node*>st;
      Node* temp=root;
        while(true)
        { if(temp!=NULL){st.push(temp);temp=temp->left;}
            
            else{
                if(st.empty()==true){break;}
                temp=st.top();
                st.pop();
                if(head==NULL){head=temp;prev=temp;}
                else{prev->right=temp;
                    prev->right->left=prev;
                   prev=prev->right;
                 }
               temp=temp->right;
            }
        }
        return head;
    }
};
