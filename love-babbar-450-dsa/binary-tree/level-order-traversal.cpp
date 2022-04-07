//https://practice.geeksforgeeks.org/problems/level-order-traversal/1#
class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int>v;
      queue<Node*>st;
      st.push(node);
      while(!st.empty())
      {
          int s=st.size();
          for(int i=0;i<s;i++)
          {
              Node* temp=st.front();
              st.pop();
              v.push_back(temp->data);
             if(temp->left){st.push(temp->left);}
              if(temp->right){st.push(temp->right);}
            
             
          }
      }
      return v;
      
    }
};