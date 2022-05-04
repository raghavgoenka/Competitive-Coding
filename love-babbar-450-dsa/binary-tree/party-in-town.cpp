//https://practice.geeksforgeeks.org/problems/party-in-town3951/1#
class Solution{
public:
    int  dfs( int node,vector<vector<int>> &adj,vector<int>&vis)
    {
           vis[node]=1;
           int count=0;
           for(auto u:adj[node])
           {
               if(!vis[u]){
                    count=max(count,1+dfs(u,adj,vis));
               }
           }
        //   cout<<node<<"--"<<count<<endl;
           return count;
    }
    int partyHouse(int N, vector<vector<int>> &adj){
        // code here
        int res=INT_MAX;
        for(int i=1;i<=N;i++)
        {
            vector<int>vis(N+1,0);
            
            res=min(res,dfs(i,adj,vis));
        }
        return res;
        
    }
};