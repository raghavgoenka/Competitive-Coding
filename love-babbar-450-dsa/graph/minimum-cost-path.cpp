//https://practice.geeksforgeeks.org/problems/minimum-cost-path3833/1/#
class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        // Code here
        int n=grid.size(),m=grid[0].size();
    
    vector<vector<int>> dis(n,vector<int>(m,INT_MAX));
    priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>> >pq;
    
    pq.push({grid[0][0],{0,0}});
    int dx[]={0,0,-1,1};
    int dy[]={-1,1,0,0};
    dis[0][0]=grid[0][0];

         while(!pq.empty())
         {
             int w=pq.top().first;
             int a=pq.top().second.first;
             int b=pq.top().second.second;
             pq.pop();
             for(int i=0;i<4;i++)
             {
                 int x=a+dx[i];
                 int y=b+dy[i];
                 if(x>=0&&x<n&&y>=0&&y<m&&(w+grid[x][y])<dis[x][y])
                 {
                     dis[x][y]=min(dis[x][y],w+grid[x][y]);
                    //  vis[x][y]=1;
                    
                    pq.push({dis[x][y],{x,y}});
                 }
             }
         }
        //  for(int i=0;i<n;i++){for(int j=0;j<m;j++){cout<<dis[i][j]<<" ";}cout<<endl;}
         return dis[n-1][m-1];
      
    }
};