//https://practice.geeksforgeeks.org/problems/length-of-largest-region-of-1s-1587115620/1#
//similar as max area of island just an extra counter for largest island in the 2d grid
class Solution
{
    public:
    
     void dfs(vector<vector<int>>& M, int n, int m, int i, int j,int &count){
        M[i][j] = -1;
        count+=1;
        vector<int>row = {i + 1, i - 1, i, i,i+1,i-1,i+1,i-1};
        vector<int>col = {j, j, j + 1, j - 1,j+1,j-1,j-1,j+1};
        for(int k = 0; k < 8; k++){
            if(row[k] < n && col[k] < m && row[k] >= 0 && col[k] >= 0 
                && M[row[k]][col[k]] == 1){
                
                dfs(M, n, m, row[k], col[k],count);
            }
        }
         
         
         
    }
    //Function to find unit area of the largest region of 1s.
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
         int n = grid.size(), m = grid[0].size();
       int mx=INT_MIN;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] ==1){
                    int count=0;
                    dfs(grid, n, m, i, j,count);
                    mx=max(mx,count);
                }
            }
        }
        return mx==INT_MIN?0:mx;
    }
};