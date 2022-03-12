//https://practice.geeksforgeeks.org/problems/bipartite-graph/1

class Solution {
public:

   bool checkBipartite(int node,vector<int> adj[],int color[])
   {
       
       if(color[node]==-1){color[node]=0;}
       for(auto i:adj[node])
       {
           if(color[i]==-1)
           {
               color[i]=color[node]^1;
               if(!checkBipartite(i,adj,color))
	            {
	                return false;
	            }
           }
           else if(color[node]==color[i]){return false;}
       }
       return true;
       
   }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    int color[V];
	    memset(color,-1,sizeof(color));
	    for(int i=0;i<V;i++)
	    {
	        if(color[i]==-1)
	        {
	            if(!checkBipartite(i,adj,color))
	            {
	                return false;
	            }
	        }
	    }
	    return true;
	}

};