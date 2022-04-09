//https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1

class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        queue<pair<Node*,int>>q;
        q.push({root,0});
        vector<int>res;
        map<int,int>mp;
        while(!q.empty())
        {
            auto i=q.front();
            q.pop();
            Node* temp=i.first;
            int x=i.second;
            if(mp[x]==0){mp[x]=temp->data;}
            if(temp->left)
            {
                q.push({temp->left,x-1});
            }
            if(temp->right)
            {
                q.push({temp->right,x+1});
            }
        }
        for(auto i:mp){res.push_back(i.second);}
        
        return res;
        
    }

};