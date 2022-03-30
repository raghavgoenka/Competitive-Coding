//https://practice.geeksforgeeks.org/problems/hamiltonian-path2522/1/#
class Solution
{
    public:
    int vis[15]={0};
    bool dfs(vector<int>adj[],int node,int n,int count)
    {
        
        if(count==n-1){return true;}
        vis[node]=1;
        
        for(auto i:adj[node])
        {
            if(!vis[i]){
                
            if(dfs(adj,i,n,count+1))
            {return true;}
                
            }    
        }
        
        vis[node]=0;
        
        return false;
    }
    bool check(int N,int M,vector<vector<int>> Edges)
    {
        // code here
        vector<int>adj[N+1];
        for(int i=0;i<Edges.size();i++)
        {
            adj[Edges[i][0]].push_back(Edges[i][1]);
            adj[Edges[i][1]].push_back(Edges[i][0]);
        }
        
        for(int i=0;i<N;i++)
        {
            
            if(dfs(adj,i,N,0))
            { 
                return true;
            }
        }
        return false;
    }
};