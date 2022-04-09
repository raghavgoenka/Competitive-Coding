//https://practice.geeksforgeeks.org/problems/two-mirror-trees/1#

class Solution
{
    public:
    void trav(Node* node,vector<int>&v)
    {
        if(node==NULL){return ;}
        v.push_back(node->data);
        trav(node->left,v);
        trav(node->right,v);
    }
    void trav2(Node* node,vector<int>&r)
    {
        if(node==NULL){return ;}
        r.push_back(node->data);
        trav2(node->right,r);
        trav2(node->left,r);
        
    }
    int areMirror(Node* a, Node* b) {
    // Your code here
    vector<int>v,r;
     trav(a,v);
     trav2(b,r);
     
     if(v==r){return 1;}
      return 0;
    }

};

//Recursion 

int areMirror(Node* a, Node* b) {
        if(!a && !b)return 1;
        
        if(!a || !b)return 0;
        
        if(a->data != b->data)return 0;
        
        return areMirror(a->left,b->right) || areMirror(a->right,b->left);
    }