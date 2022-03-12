//https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1#
class Solution {
 public:
  int checkCycle(int node,int parent,vector<int>&vis,vector<int> adj[])
    {
       
    queue<pair<int,int>>q;
    vis[node]=1;
    q.push({node,-1});
    while(!q.empty())
    {
        int s=q.front().first;
        int par=q.front().second;
        
        q.pop();
        for(auto v:adj[s]) {
                if(!vis[v]) {
                    q.push({v,s});
                    vis[v] = true;
                }
                else if(v!=par){return true;}
            }
    }
    
    return false;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        
        vector<int>vis(V,0);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(checkCycle(i,-1,vis,adj)){return true;}
            }
            
        }
     
       return  false;
    
    }
};