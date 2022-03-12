//https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1/
class Solution {
public:
  
    bool checkCycle(int node,vector<int>&vis,vector<int>&dfsvis,vector<int>adj[])
    {
        vis[node]=1;
        dfsvis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                if(checkCycle(it,vis,dfsvis,adj))
                {
                    return true;
                }
            }
            else if(dfsvis[it]){return true;}
        }
        
        dfsvis[node]=0;
        return false;
    }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>vis(V,0),dfsvis(V,0);
        
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(checkCycle(i,vis,dfsvis,adj))
                {
                    return true;
                }
            }
        }
        return false;
    }
};

