//https://practice.geeksforgeeks.org/problems/ebb840c27b36a8c8ad121fd576a2fa6f2bc1e6f2/1#

//imp 
class Solution{
public:
    unordered_map<Node*, Node*> rootMap;
    Node *tar;
    int sum = 0;
    unordered_set<Node*> s;
    void findParent(Node* root,Node* parent,int target){
        if(!root) return;
        if(root->data == target) tar = root;
        rootMap[root] = parent;
        findParent(root->left, root, target);
        findParent(root->right, root, target);
    }
    
    void findSum(Node* root, int k){
        if(!root) return;
        if(k<0) return;
        if(s.find(root)!=s.end()) return;
        sum+=root->data;
        s.insert(root);
        
        findSum(root->left, k-1);
        findSum(root->right, k-1);
        findSum(rootMap[root], k-1);
    }
    
    int sum_at_distK(Node* root, int target, int k)
    {
        // code here
        Node *parent = NULL;
        tar = NULL;
        findParent(root, parent, target);
        findSum(tar, k);
        return sum;
    }
};
