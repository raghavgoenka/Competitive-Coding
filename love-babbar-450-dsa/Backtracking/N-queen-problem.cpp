//https://practice.geeksforgeeks.org/problems/n-queen-problem0315/1#
class Solution{
public:
 bool isSafePos(int row,int col,vector<vector<int>>&vis,int n)
    {
        int r1=row,c1=col;
        while(row>=0&&col>=0)
        {
            if(vis[row][col]!=0){return false;}
            row--;col--;
        }
        row=r1,col=c1;
        while(col>=0)
        {
            if(vis[row][col]!=0){return false;}
            col--;
        }
        row=r1,col=c1;
        while(row<n&&col>=0)
        {
            if(vis[row][col]!=0){return false;}
            row++;col--;
        }
        return true;
    }
    void solve(int col,vector<int>&board, vector<vector<int>>&res,int n,vector<vector<int>>&vis)
    {
        if(col==n)
        {
            res.push_back(board);
            
            return;
        }
        for(int row=0;row<n;row++)
        {
            if(isSafePos(row,col,vis,n))
            {
              board.push_back(row+1);
              vis[row][col]=1;
                solve(col+1,board,res,n,vis);
                vis[row][col]=0;
                board.pop_back();
            }
        }
    }
    vector<vector<int>> nQueen(int n) {
        // code here
          vector<vector<int>>res,vis(n,(vector<int>(n,0)));
        vector<int>board;
    
        
        solve(0,board,res,n,vis);
        return res;
    }
};