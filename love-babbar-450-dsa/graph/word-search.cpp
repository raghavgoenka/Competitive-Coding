//https://practice.geeksforgeeks.org/problems/word-search/1/#
class Solution {
public:

bool dfs(vector<vector<char>> &M, int n, int m, int i, int j,int ind,int p,string word){
    if(ind==p){return true;}

    M[i][j] = '1';
    
    vector<int>row = {i + 1, i - 1, i, i};
    vector<int>col = {j, j, j + 1, j - 1};
    for(int k = 0; k < 4; k++){
        
        if(row[k] < n && col[k] < m && row[k] >= 0 && col[k] >= 0 
            && M[row[k]][col[k]] == word[ind]){
          
          if( dfs(M, n, m, row[k], col[k],ind+1,p,word)){  return true;};
            
        }
        
    }
 M[i][j]=word[ind-1];
 return false;
}
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here,
    int n=board.size(),m=board[0].size(),p=word.size();
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(board[i][j]==word[0]
            && dfs(board, n, m, i, j,1,p,word))
            {
                return true;
            }
        }
    }
//   for(int i=0;i<n;i++)
//   {
//       for(int j=0;j<m;j++){cout<<board[i][j]<<" ";}
//       cout<<endl;
//   }
    return false;
    }
};
