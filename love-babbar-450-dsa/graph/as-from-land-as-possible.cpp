//https://leetcode.com/problems/as-far-from-land-as-possible/submissions/
class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
         int n=grid.size(),m=grid[0].size();
        vector<vector<int>>res(n,vector<int>(m,-1));	    
        vector<vector<int>>vis(n,vector<int>(m,0));	    

	    queue<pair<int,int>>q;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++){if(grid[i][j]==1){vis[i][j]=1;q.push({i,j});res[i][j]=0;}
         }
	        
	   }
	    int dx[4] = {0, 1, 0, -1};
	    int dy[4] = {1, 0, -1, 0};
        int mx=INT_MIN;
	    while(!q.empty())
	    {
	        int a=q.front().first;
	        int b=q.front().second;
	        q.pop();
	        int dis=res[a][b];
	        for(int i=0;i<4;i++)
	        {
	            int x=a+dx[i];
	            int y=b+dy[i];
	            
	            if(x>=0&&x<n&&y>=0&&y<m&&vis[x][y]==0)
	            {
	                vis[x][y]=1;
	                q.push({x,y});
	                res[x][y]=dis+1;
                    mx=max(mx,res[x][y]);
	            }
	        }
	    }
	    return mx!=INT_MIN?mx:-1;
    }
};