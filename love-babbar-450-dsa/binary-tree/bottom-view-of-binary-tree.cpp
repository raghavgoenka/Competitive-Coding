//https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1#

class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int>res;
        if(root==NULL){return res;}
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty())
        {
            auto i=q.front();
            q.pop();
            Node* temp=i.first;
            int level=i.second;
            mp[level]=temp->data;
            if(temp->left){q.push({temp->left,level-1});}
            if(temp->right){q.push({temp->right,level+1});}
        }
        for(auto i:mp){res.push_back(i.second);}
        
        return res;
    }
};