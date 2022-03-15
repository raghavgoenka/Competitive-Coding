//https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/1

//This problem is a application of dfs on 2d grid/matrix that is from ine location we can move to 8 other location horizaontally,vertically,diagonally and
// just counting connected components than.
//!!! So basically counting connected components in the 2d matrix using dfs


class Solution{
  public:
    // Function to find the number of islands.
    void dfs(vector<vector<char>>& M, int n, int m, int i, int j){
        M[i][j] = 'x'; // -1 is visited
        vector<int>row = {i + 1, i - 1, i, i, i + 1, i + 1, i - 1, i - 1};
        vector<int>col = {j, j, j + 1, j - 1, j + 1, j - 1, j + 1, j - 1};
        for(int k = 0; k < 8; k++){
            if(row[k] < n && col[k] < m && row[k] >= 0 && col[k] >= 0 
                && M[row[k]][col[k]] == '1'){
                dfs(M, n, m, row[k], col[k]);
            }
        }
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        // your code goes here
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == '1'){
                    cnt++;
                    dfs(grid, n, m, i, j);
                }
            }
        }
        return cnt;
    }
};