//https://practice.geeksforgeeks.org/problems/mother-vertex/1/#

class Solution 
{
    public:
    void dfs(int node,vector<int> adj[],int &c, vector<int>&vis)
    {
        vis[node]=1;
        c++;
        for(auto it:adj[node])
        {
            if(!vis[it])
            dfs(it,adj,c,vis);
        }
    }
    //Function to find a Mother Vertex in the Graph.
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	 
	      for(int i=0;i<V;i++)
	    {   
	        vector<int>vis(V,0);
	        int c=0;
	        dfs(i,adj,c,vis);
	        if(c==V) return i;
	    }
	    return -1;
	}

};

