//https://practice.geeksforgeeks.org/problems/number-of-provinces/1/

class Solution {
  public:
  void dfs(int node,vector<int>&vis,vector<vector<int>> adj,int n)
    {
        
        vis[node]=1;
       for(int i=0;i<n;i++){
        if(adj[node][i] && !vis[i]){
            dfs(i,vis,adj,n);
        }
    }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
         vector<int>v,vis(V+1,0);
         int c=0;
        for(int i=0;i<V;i++)
        {
            if(!vis[i]){c++;dfs(i,vis,adj,V);}
        }
        return c;

    }
};