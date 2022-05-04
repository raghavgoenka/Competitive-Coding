//https://practice.geeksforgeeks.org/problems/replace-every-element-with-the-least-greater-element-on-its-right/1/#

//build the tree from the end of the array and determine the inorder successor of the value if present 
struct Node{
    
  int data;
 struct  Node*left,*right;
 Node(int val)
 {
     data=val;
     left=right=NULL;
 }
};
class Solution{
    public:
    Node* buildTree(Node*root,int data,int&res)
    {
        if(root==NULL){return new Node(data);}
        
        if(root->data>data)
        {
            res=root->data;
            root->left=buildTree(root->left,data,res);
        }
       else if(root->data<=data)
        {
           root->right=buildTree(root->right,data,res);
        }
        return root;
    }
    vector<int> findLeastGreater(vector<int>& arr, int n) {
        Node*root=NULL;
        vector<int>a(n);
        for(int i=n-1;i>=0;i--)
        {
          int res=-1;
            root=buildTree(root,arr[i],res);
           a[i]=res;
        }
        return a;
    }
};