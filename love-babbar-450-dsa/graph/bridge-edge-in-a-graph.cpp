//https://practice.geeksforgeeks.org/problems/bridge-edge-in-graph/1#

class Solution
{
	public:
	int in[100001]={0},low[100001]={0},vis[100001]={0};
	int timer=0,a,b,flag=0;
	void dfs(vector<int> adj[],int node,int par)
	
	{
	 vis[node]=1;
	 in[node]=timer;
	 low[node]=timer;
	 timer++;
	 for(auto i:adj[node])
	 {
	     if(i==par){continue;}
	     if(vis[i]==1)
	     { //back edge
	         low[node]=min(low[node],in[i]);
	     }
	     else{
             //forward edge
	         dfs(adj,i,node);
	         if(low[i]>in[node]&&i==b&&node==a)
	         {
	             flag=1;
	             return;
	         }
	         low[node]=min(low[node],low[i]);
	     }
	 }
	 
	}
	
	
    //Function to find if the given edge is a bridge in graph.
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        // Code here
        a=c,b=d;
        dfs(adj,c,-1);
        return flag;
    }
};