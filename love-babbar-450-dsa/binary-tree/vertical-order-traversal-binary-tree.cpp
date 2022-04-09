//https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1#
class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.


    //imp question
    
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        queue<pair<Node*,pair<int,int>>> q; //store node,x axis and level eg{root,{0,0}};
        map<int,map<int,vector<int>>>mp; // store x axis and level and node data 
        q.push({root,{0,0}});
        while(!q.empty())
        {
            auto i=q.front();
            q.pop();
            int a=i.second.first,b=i.second.second;
            
            Node* temp=i.first;
            mp[a][b].push_back(temp->data);
            if(temp->left)
            {
                q.push({temp->left,{a-1,b+1}});
            }
            if(temp->right)
            {
                q.push({temp->right,{a+1,b+1}});
            }
        }
        vector<int>res;
        
        for(auto i:mp)
        {
            for(auto j:i.second)
            {
                for(auto k:j.second){res.push_back(k);}
            }
        }
        return res;
        
    }
};