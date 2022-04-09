
//https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1#
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
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
            if(mp.find(x)==mp.end()){mp[x]=temp->data;}
            if(temp->right)
            {
                q.push({temp->right,x+1});
            }
            if(temp->left)
            {
                q.push({temp->left,x+1});
            }
            
        }
        for(auto i:mp){res.push_back(i.second);}
        
        return res;
    }
};
