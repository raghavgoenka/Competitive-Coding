//https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>v;
        int vis[V]={0};
        queue<int>q;
    vis[0]=1;
    q.push(0);
    while(!q.empty())
    {
        int s=q.front();
        v.push_back(s);
        vis[s]=1;
        
        q.pop();
        for(auto v:adj[s]) {
                if(!vis[v]) {
                    q.push(v);
                    vis[v] = true;
                }
            }
    }
    return v;
        
    }
};