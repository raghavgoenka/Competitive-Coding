//https://practice.geeksforgeeks.org/problems/x-total-shapes3617/1/#

class Solution
{
    public:
    int dx[4] = {0, 1, 0, -1};
	int dy[4] = {1, 0, -1, 0};

    void dfs(vector<vector<char>>& grid, vector<vector<int>>&vis,int i,int j,int n,int m)
    {
        
        grid[i][j]='1';
        vis[i][j]=1;
        
        for(int p=0;p<4;p++)
        {
            int x=i+dx[p];
            int y=j+dy[p];
            if(x>=0&&x<n&&y>=0&&y<m&&vis[x][y]==0&&grid[x][y]=='X')
            {
            
                dfs(grid,vis,x,y,n,m);
                
            }
        }
        // return ;
    }
    
    //Function to find the number of 'X' total shapes.
    int xShape(vector<vector<char>>& grid) 
    {
        // Code here
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='X'&&vis[i][j]==0){
                    c++;
                    dfs(grid,vis,i,j,n,m);
                    
                }
            }
        }
       
        return c;
        
    }
};