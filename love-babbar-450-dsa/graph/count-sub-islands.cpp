//https://leetcode.com/problems/count-sub-islands/
class Solution {
public:
       
    void dfs(vector<vector<int>> &M, int n, int m, int i, int j,vector<vector<int>> &M1,bool &f){
    
  if(M[i][j]==0&&M1[i][j]==1){f=0;return;}
    M[i][j]=0;
    M1[i][j]=0;
    
    vector<int>row = {i + 1, i - 1, i, i};
    vector<int>col = {j, j, j + 1, j - 1};
    for(int k = 0; k < 4; k++){
        
        if((row[k] < n && col[k] < m && row[k] >= 0 && col[k] >= 0&& M1[row[k]][col[k]]==1)){
          
           dfs(M, n, m, row[k], col[k],M1,f);
        }
        
    }


}
   
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
         int n=grid2.size(),m=grid2[0].size();
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            bool f=1;
            if(grid2[i][j]==1)
            { dfs(grid1, n, m, i, j,grid2,f);
            if(f==1){
                    c++;}
            }
        }
    }
       return c; 
    }
};