//https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/
//https://practice.geeksforgeeks.org/problems/nodes-at-given-distance-in-binary-tree/1#

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
     void getParent(TreeNode*root,map<TreeNode*,TreeNode*>&par)
    {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();
            if(temp->left)
            {
                q.push(temp->left);
                par[temp->left]=temp;
            }
            if(temp->right)
            {
                q.push(temp->right);
                par[temp->right]=temp;
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k){
        map<TreeNode*,TreeNode*>par;
        getParent(root,par);
        
        map<TreeNode*,bool>vis;
         queue<TreeNode*>q;
        vector<int>res;
        q.push(target);
        vis[target]=true;
        
        while(!q.empty())
        {
            if(k-- ==0){break;}
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left&&vis[temp->left]==false){
                    q.push(temp->left);
                    vis[temp->left]=true;
                }
                if(temp->right&&vis[temp->right]==false){
                    q.push(temp->right);
                    vis[temp->right]=true;
                }
                if(par[temp]&&vis[par[temp]]==false){
                    q.push(par[temp]);
                    vis[par[temp]]=true;
                }
                
            }
        }
        while(!q.empty())
        {
            res.push_back(q.front()->val);q.pop();
        }
        return res;
    }
};

//GFG SOLUTION
class Solution
{
private:

public:
Node* taraddr;
   void findNode(Node* root,int target)
   {
        if(root==NULL){return;}
        
        if(root->data==target){taraddr=root;return;}  // finding target node address
        
        findNode(root->left,target);
        findNode(root->right,target);
   }
    void getParent(Node*root,map<Node*,Node*>&par)
    {
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            Node* temp=q.front();
            q.pop();
            if(temp->left)
            {
                q.push(temp->left);
                par[temp->left]=temp;
            }
            if(temp->right)
            {
                q.push(temp->right);
                par[temp->right]=temp;
            }
        }
    }
    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        map<Node*,Node*>par;
        getParent(root,par);
        
        map<Node*,bool>vis;
         queue<Node*>q;
         findNode(root,target); //find target node address;
        vector<int>res;
        q.push(taraddr);
        vis[taraddr]=true;
        
        while(!q.empty())
        {
            if(k--==0){break;}
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                Node* temp=q.front();
                q.pop();
                if(temp->left&&vis[temp->left]==false){
                    q.push(temp->left);
                    vis[temp->left]=true;
                }
                if(temp->right&&vis[temp->right]==false){
                    q.push(temp->right);
                    vis[temp->right]=true;
                }
                if(par[temp]&&vis[par[temp]]==false){
                    q.push(par[temp]);
                    vis[par[temp]]=true;
                }
                
            }
        }
        while(!q.empty())
        {
            res.push_back(q.front()->data);q.pop();
        }
        sort(res.begin(),res.end());
        return res;
        
    }
};