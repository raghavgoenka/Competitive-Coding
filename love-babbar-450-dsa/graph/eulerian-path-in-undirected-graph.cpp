//https://practice.geeksforgeeks.org/problems/eulerian-path-in-an-undirected-graph5052/1#
class Solution{
public:
     
    int eulerPath(int N, vector<vector<int>> graph){
        // code here
        int n=graph.size(),m=graph[0].size();
        vector<int>adj[n+1];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(graph[i][j]==1){adj[i+1].push_back(j+1);}
            }
        }
        int c=0;
        for(int i=1;i<=n;i++)
        {
           if(adj[i].size()%2!=0){c++;}
        }
        return c==2;
        
    }
};