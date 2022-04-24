//https://practice.geeksforgeeks.org/problems/find-a-pair-with-given-target-in-bst/1#

//best approach
class BSTIterator
{
    stack<Node*> st;
    bool reverse = true;
    // reverse -> true [before]
    // reverse -> false [next]
    public:
    BSTIterator(Node *root, bool isReversed){
        reverse = isReversed;
        pushAll(root);
    }
    int next()
    {
        Node *root = st.top();
        st.pop();
        if(!reverse) pushAll(root->right);
        else pushAll(root->left);
        return root->data;
    }
    void pushAll(Node *root)
    {
        while(root)
        {
            st.push(root);
            if(!reverse) root = root->left;
            else root = root->right;
        }
    }
    
};
class Solution{
  public:
    // root : the root Node of the given BST
    // target : the target sum
    int isPairPresent(struct Node *root, int target)
    {
    //add code here.
        if(!root) return 0;
         BSTIterator left(root, false);
         BSTIterator right(root, true);
         
         int i = left.next();
         int j = right.next();
         while(i < j)
         {
             if(i + j == target) return 1;
             else if(i + j < target) i = left.next();
             else j = right.next();
         }
         return 0;
    }
};