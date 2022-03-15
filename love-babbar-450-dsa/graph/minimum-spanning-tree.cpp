//https://practice.geeksforgeeks.org/problems/minimum-spanning-tree/1#
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<int>key(V,1e18),mst(V,0);
        int sum=0;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> >pq;
            key[0]=0;
            pq.push({0,0});
            
            while(!pq.empty())
            {
                
                int node=pq.top().second;
                
                pq.pop();
                mst[node]=1;
                for(auto it:adj[node])
                {
                    int v=it[0];
                    int weight=it[1];
                    if(mst[v]==0&&weight<key[v])
                    {
                        
                        key[v]=weight;
                        pq.push({key[v],v});
                    }
                }
                
            }
            for(int i=0;i<V;i++){sum+=key[i];}
         return sum;  
            
    }
};