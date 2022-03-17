//https://leetcode.com/problems/rotting-oranges/submissions/
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>time(n,vector<int>(m,0));

        queue<pair<int,int>>pq;
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2){
                    pq.push({i,j});
                    grid[i][j]=-1;
                    time[i][j]=0;
                }
                else if(grid[i][j]==1){c++;}
            }
        }
        if(c==0){return 0;}
        int row[]={1,-1,0,0};
        int col[]={0,0,1,-1};
        int cnt=1,mx=INT_MIN;
        while(!pq.empty())
        {
            int i=pq.front().first;
            int j=pq.front().second;
            pq.pop();
            
            for(int k=0;k<4;k++)
            {
                int x=row[k]+i;
                int y=col[k]+j;
                
                if(x>=0&&x<n&&y>=0&&y<m&&grid[x][y]==1)
                {
                    
                    grid[x][y]=2;
                    pq.push({x,y});
                    time[x][y]=time[i][j]+1;
                    mx=max(time[x][y],mx);
                    c--;
                }
                
            }
            
        }
        return c!=0?-1:mx;
        
        
    }
};