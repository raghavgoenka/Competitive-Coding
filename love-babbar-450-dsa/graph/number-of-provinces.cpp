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
//https://leetcode.com/problems/number-of-provinces/
//leetcode
class Solution {
public:
    void dfs(int node,vector<int>adj[],vector<int>&vis)
    {
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it]){
                dfs(it,adj,vis);
            }
        }
        return ;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>adj[n+1];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1&&i!=j){
                adj[i+1].push_back(j+1);
                }
            }
        }
        int c=0;
        vector<int>vis(n+1,0);
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {   c++;
                dfs(i,adj,vis);
            }
        }
        return c;
        
        
        
    }
};