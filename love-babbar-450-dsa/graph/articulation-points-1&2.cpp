//https://practice.geeksforgeeks.org/problems/articulation-point-1/0/#
class Solution {
  public:
  int in[100001]={0},low[100001]={0},vis[100001]={0};
	int timer=0;
	set<int>s;
	void dfs(vector<int> adj[],int node,int par)
	
	{
	 vis[node]=1;
	 in[node]=timer;
	 low[node]=timer;
	 timer++;
	 int child=0;
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
	         low[node]=min(low[node],low[i]);
	         if(low[i]>=in[node]&&par!=-1)
	         {
	           s.insert(node);
	           
	         }
	         child++;
	         
	     }
	 }
	 if(par==-1&&child>1){s.insert(node);}
	 
	}
	
    vector<int> articulationPoints(int V, vector<int>adj[]) {
        // Code here
        
        for(int i=0;i<V;i++)
        {
            if(vis[i]==0){dfs(adj,i,-1);}
        }
        vector<int>v;
        for(auto it=s.begin();it!=s.end();it++){v.push_back(*it);}
    if(v.size()==0){v.push_back(-1);}
        return v;
    }
};