//https://practice.geeksforgeeks.org/problems/brothers-from-different-root/1#

//count pairs eqaul to sum from two bst's;

class Solution
{
public:
 map<int,int>mp,mp2;
 int f1=0;
   void inorder(Node*root)
   {
       if(root==NULL){return ;}
       
       inorder(root->left);
       if(f1==0){mp[root->data]=1;}
       else{mp2[root->data]=1;}
       inorder(root->right);
   }
    int countPairs(Node* root1, Node* root2, int x)
    {
      inorder(root1);
      f1=1;
      inorder(root2);
      int c=0;
    //   cout<<mp.size()<<"--"<<mp2.size()<<endl;
      for(auto i:mp)
      {
          if(mp2[(x-i.first)]==1){c++;}
      }
      return c;
    }
};
