//https://practice.geeksforgeeks.org/problems/duplicate-subtree-in-binary-tree/1#
class Solution {
  public:
    /*This function returns true if the tree contains 
    */
    int v=0;
    map<string ,int>mp;
   
    string getDuplicate(Node*root)
    {
       if(root==NULL){return "";}
       else if(root->right==NULL&&root->left==NULL){ return to_string(root->data);}
        
       string s=to_string(root->data)+getDuplicate(root->left) 
        +getDuplicate(root->right);
        string b=to_string(root->data);
        mp[s]++;
        if(mp[s]>1&&s.size()>1){v=1;}
        return s;
    }
    int dupSub(Node *root) {
         // code here
          getDuplicate(root);
    return v;
    }
};