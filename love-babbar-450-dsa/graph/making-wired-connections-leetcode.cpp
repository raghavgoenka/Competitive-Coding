//https://leetcode.com/problems/number-of-operations-to-make-network-connected/submissions/
class Solution {
public:
    
    
    void dfs(int node,vector<int>&vis,vector<int>adj[]){
        vis[node]=1;
        
        for(auto i:adj[node])
        {
            if(!vis[i]){ dfs(i,vis,adj);}
        }
        
    }
    int makeConnected(int n, vector<vector<int>>& con) {
         vector<int>adj[n];
         vector<int>vis(n,0);

        for(int i=0;i<con.size();i++)
        {
            adj[con[i][0]].push_back(con[i][1]);
            adj[con[i][1]].push_back(con[i][0]);
        }
       
        int c=-1;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i,vis,adj);
                c++;
            }
            
        }
        
        return n-1>con.size()?-1:c;
        
    }
};