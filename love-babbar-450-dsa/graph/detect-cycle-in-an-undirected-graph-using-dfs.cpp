//https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1#
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  int checkCycle(int node,int parent,vector<int>&vis,vector<int> adj[])
    {
       
        vis[node]=1;
        for(auto i:adj[node])
        {
            if(!vis[i])
            {
                if(checkCycle(i,node,vis,adj))
                {
                    return true;
                }
            }
            else if(i!=parent){return true;}
            
        }
        return false;;
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

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends