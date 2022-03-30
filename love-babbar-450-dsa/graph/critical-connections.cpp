
//https://practice.geeksforgeeks.org/problems/critical-connections/1/#
class Solution {
public:
 int in[100001]={0},low[100001]={0},vis[100001]={0};
    vector<vector<int>>v;
   
	int timer=0,a,b,flag=0;
	void dfs(vector<int>adj[],int node,int par)
	
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
	         if(low[i]>in[node])
	         {
	             
                node>i?v.push_back({i,node}):v.push_back({node,i});
                 
	         }
	         low[node]=min(low[node],low[i]);
	     }
	 }
	 
	}
	vector<vector<int>>criticalConnections(int V, vector<int> adj[]){
	    // Code here
	    for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                dfs(adj,i,-1);
            }
        }
        sort(v.begin(),v.end());
        return v;
	}
};