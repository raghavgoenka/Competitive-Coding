//https://practice.geeksforgeeks.org/problems/serialize-and-deserialize-a-binary-tree/1#
class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int>res;
    vector<int> serialize(Node *root) 
    {
        //Your code here
        if(root==NULL){res.push_back(0);return res;}
        res.push_back(root->data);
        serialize(root->left);
        serialize(root->right);
        return res;
    }
    
    //Function to deserialize a list and construct the tree.
    int index=0;
    Node * deSerialize(vector<int> &res)
    {
       //Your code here
    
      if(index==res.size()){return NULL;}
       
      int node=res[index++];
      if(node==0){return NULL;}
      Node* temp=new Node(node);
      temp->left=deSerialize(res);
      temp->right=deSerialize(res);
      return temp;
       
     }

};
