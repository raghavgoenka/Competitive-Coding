//https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1#
//https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/
class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your Code Here
       
       Node*cur=root;
       while(cur!=NULL)
       {
           struct Node* dummy=new struct Node(); //dummy node 
           //created at every level to traverse though nextRight pointer
           //basically creating a linked list at every node to traverse the other level
           
           Node*temp=dummy;
           while(cur!=NULL)
           {
              if(cur->left!=NULL)
              {
                  temp->nextRight=cur->left;
                  temp=temp->nextRight;
              }
              if(cur->right!=NULL)
              {
                  temp->nextRight=cur->right;
                  temp=temp->nextRight;
              }
              cur=cur->nextRight;
              
           }
           cur=dummy->nextRight;
           
        }
    }    
      
};
