//https://leetcode.com/problems/number-of-closed-islands/

// similar as number of islands here just dont consider island from corners that is first and last row and column 
class Solution {
public:
     void dfs(vector<vector<int>>& M, int n, int m, int i, int j){
        M[i][j] = 1;
        vector<int>row = {i + 1, i - 1, i, i};
        vector<int>col = {j, j, j + 1, j - 1};
        for(int k = 0; k < 4; k++){
            if(row[k] < n && col[k] < m && row[k] >= 0 && col[k] >= 0 
                && M[row[k]][col[k]] == 0){
                 dfs(M, n, m, row[k], col[k]);
            }
        }
         
         
    }
    int closedIsland(vector<vector<int>>& grid) {
         int n = grid.size(), m = grid[0].size();
        
     // this loop will make all island land that are on the corner//
       for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((i==0 || j==0 || i==n-1 || j==m-1) && grid[i][j]==0)
            {
                dfs(grid, n, m, i, j); // remove connected components from corners that is first n last row and column
                
            }
        }
    }
        
             
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 0){
                    cnt++;
                    dfs(grid, n, m, i, j);
                }
            }
        }
        return cnt;
    
    
    }
};