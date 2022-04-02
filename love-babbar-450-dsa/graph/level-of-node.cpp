//https://practice.geeksforgeeks.org/problems/level-of-nodes-1587115620/1/#

class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    queue<int>q;
	    int c=0;
	     vector<bool> vis (V, false);
	    q.push(0);
	    while(!q.empty())
	    {
	        int s=q.size();
	        
	        for(int i=0;i<s;i++)
	        {
	            int node=q.front();
	            q.pop();
	            if(node==X){return c;}
	            if(node==V){return -1;}
	            for(auto it:adj[node])
	            {if(vis[it]==false){
	                q.push(it);
	                vis[it]=true;
	            }
	            }
	        }
	        c++;
	    }
	    return -1;
	}
};
