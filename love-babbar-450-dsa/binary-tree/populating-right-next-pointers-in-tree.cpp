//https://leetcode.com/problems/populating-next-right-pointers-in-each-node/


//O(1)space
class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        Node* current = root;
        while(current) {
            // this will always be the first node of any level
            Node* level1stNode = current;
            // this runs until we iterate over all the nodes of any level
            while(current) {
                // this links the child nodes (L child -> next = R child) of the same parent node
                if(current->left) {
                    current->left->next = current->right;
                }
                // this checks whether there are more nodes towards right at the same level
                if(current->right && current->next) {
                    current->right->next = current->next->left;
                }
                // move on the next node of the current level (L -> R)
                current = current->next;
            }
            // move onto the first node of the next level
            current = level1stNode->left;
        }
        return root;
    }
};

//using stack level order traveral
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL){return root;}
        queue<Node*>q;
        q.push(root);
        int p=1;
        while(!q.empty())
        {
            int s=q.size();
            int a=p;
            for(int i=0;i<s;i++)
            {
                Node*temp=q.front();
                q.pop();
                a--;
                if(a==0){temp->next=NULL;}
                else{temp->next=q.front();}
                if(temp->left!=NULL){q.push(temp->left);}
                if(temp->right!=NULL){q.push(temp->right);}
            }
            p*=2;
            
        }
        return root;
    }
};