//https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1#

vector<int> leftView(Node *root)
{
   // Your code here
  queue<pair<Node*,int>>q;
        q.push({root,0});
        vector<int>res;
        map<int,int>mp;
         if(root==NULL){return res;}
        while(!q.empty())
        {
            auto i=q.front();
            q.pop();
            Node* temp=i.first;
            int x=i.second;
            if(mp[x]==0){mp[x]=temp->data;}
            if(temp->left)
            {
                q.push({temp->left,x+1});
            }
            if(temp->right)
            {
                q.push({temp->right,x+1});
            }
        }
        for(auto i:mp){res.push_back(i.second);}
        
        return res;
}

//recursive code
class Solution {
public:
    void recursion(TreeNode *root, int level, vector<int> &res)
    {
        if(root==NULL) return ;
        if(res.size()==level) res.push_back(root->val);
        recursion(root->right, level+1, res);
        recursion(root->left, level+1, res);
    }
    
    vector<int> rightSideView(TreeNode *root) {
        vector<int> res;
        recursion(root, 0, res);
        return res;
    }
};