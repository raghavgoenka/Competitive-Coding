//https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    void dfs(int node,vector<int>&v,vector<int>&vis,vector<int> adj[])
    {
        v.push_back(node);
        vis[node]=1;
        for(auto i:adj[node])
        {
            if(!vis[i])
            {
                dfs(i,v,vis,adj);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>v,vis(V+1,0);
        
        dfs(0,v,vis,adj);
        return v;
        
    }
};