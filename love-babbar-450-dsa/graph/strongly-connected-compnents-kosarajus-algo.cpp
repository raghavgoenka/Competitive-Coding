//https://practice.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1
class Solution
{
	public:
	stack<int>st;
	int vis[6001]={0};int res=0;
	void dfs(vector<int>adj[],int node)
	{
	    vis[node]=1;
	    for(auto i:adj[node])
	    {
	        if(!vis[i]){dfs(adj,i);}
	    }
	    st.push(node);
	}
	void dfs2(vector<int>adj[],int node)
	{
	    res++;
	    vis[node]=1;
	    for(auto i:adj[node])
	    {
	        if(!vis[i]){dfs(adj,i);}
	    }
	    
	}
	
	
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
        //topo sort
        for(int i=0;i<V;i++)
        {
            if(!vis[i]){dfs(adj,i);}
        }
        vector<int>transpose[V];
        //transpose the graph
        for(int i=0;i<V;i++)
        {
            vis[i]=0;
            for(auto it:adj[i])
            {
                transpose[it].push_back(i);
            }
        }
        //do dfs call to count the strongly connected components
        while(!st.empty())
        {
            int node=st.top();
            st.pop();
            if(!vis[node]){dfs2(transpose,node);}
        }
        return res;
        
    }
};