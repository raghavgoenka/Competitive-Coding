//https://leetcode.com/problems/shortest-path-in-binary-matrix/submissions/

class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>dis(n,vector<int>(m,0));

        queue<pair<int,int>>q;
        if(grid[0][0]==1){return -1;}
        q.push({0,0});
        vis[0][0]=1;
        dis[0][0]=1;
        int dx[8]={0,0,1,-1,1,-1,-1,1};
        int dy[8]={1,-1,0,0,1,-1,1,-1};
        while(!q.empty())
        {
         int a=q.front().first;
         int b=q.front().second;
         q.pop();
            if(a==n-1&&b==m-1){return dis[n-1][m-1];}
            for(int i=0;i<8;i++)
            {
                int x=a+dx[i];
                int y=b+dy[i];
                if(x>=0&&x<n&&y>=0&&y<m&&grid[x][y]==0&&vis[x][y]==0)
                {
                    vis[x][y]=1;
                    q.push({x,y});
                    dis[x][y]=dis[a][b]+1;
                }
            }
        }
        return -1;
    }
};