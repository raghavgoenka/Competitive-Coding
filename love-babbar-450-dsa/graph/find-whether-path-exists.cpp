//https://practice.geeksforgeeks.org/problems/find-whether-path-exist5238/1/#

class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool dfs(vector<vector<int>> &M, int n, int m, int i, int j){
    if(M[i][j]==2){return true;}

    M[i][j] =-1;
    
    vector<int>row = {i + 1, i - 1, i, i};
    vector<int>col = {j, j, j + 1, j - 1};
    for(int k = 0; k < 4; k++){
        
        if(row[k] < n && col[k] < m && row[k] >= 0 && col[k] >= 0 
            && M[row[k]][col[k]] >0){
          
          if( dfs(M, n, m, row[k], col[k])){return true;}
        }
        
    }
    // M[i][j]=3;
 return false;
}
    bool is_Possible(vector<vector<int>>& grid) 
    {
        int n=grid.size(),m=grid[0].size();
    int i,j,a,b;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==1
            && dfs(grid, n, m, i, j))
            {
                return true;
            }
        }
    }
    
    return false;
    }
};