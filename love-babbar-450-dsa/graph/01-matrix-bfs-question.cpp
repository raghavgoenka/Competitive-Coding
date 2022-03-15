//https://leetcode.com/problems/01-matrix/
class Solution {
public:
   
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& grid) {
          int n = grid.size(), m = grid[0].size();
       vector<vector<int>> dist(n, vector<int>(m, 1e5));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<m;j++)
          {
              if(grid[i][j]==0){q.push({i,j});dist[i][j]=0;}
          }
        }
    while(!q.empty())
         {
             int i=q.front().first;
             int j=q.front().second;
             vector<int>row = {i + 1, i - 1, i, i};
             vector<int>col = {j, j, j + 1, j - 1};
             q.pop();
             for(int k=0;k<4;k++)
             {
                 if(row[k] < n && col[k] < m && row[k] >= 0 && col[k] >= 0 &&grid[row[k]][col[k]]==1){
                     if(dist[row[k]][col[k]]>dist[i][j]+1){
                     dist[row[k]][col[k]]=dist[i][j]+1;
                     grid[row[k]][col[k]]=-1;
                      q.push({row[k], col[k]});
                }
                 }
             }
         }
       return dist; 
    }
};