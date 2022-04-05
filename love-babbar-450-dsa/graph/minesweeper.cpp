//https://leetcode.com/problems/minesweeper/submissions/
class Solution {
public:
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        queue<pair<int,int>>q;
        int n=board.size(),m=board[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int a=click[0],b=click[1];
        if(board[a][b]=='M'){board[a][b]='X';return board;}
        q.push({a,b});
        vis[a][b]=1;
        board[a][b]='B';
        int dx[8]={-1,1,0,0,1,-1,-1,1};
        int dy[8]={0,0,1,-1,1,1,-1,-1};
        while(!q.empty())
        { int s=q.size();
            for(int j=0;j<s;j++){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
                int c=0;
            
            for(int i=0;i<8;i++)
            {
                int a1=x+dx[i];
                int b1=y+dy[i];
                
                if(a1>=0&&a1<n&&b1>=0&&b1<m&&vis[a1][b1]==0&&board[a1][b1]=='M')
                {
                   c++;
                }
            }
                if(c>0){board[x][y]='0'+c;}
                else{
                     for(int i=0;i<8;i++)
            {
                int a1=x+dx[i];
                int b1=y+dy[i];
                
                if(a1>=0&&a1<n&&b1>=0&&b1<m&&vis[a1][b1]==0&&board[a1][b1]=='E')
                {
                   board[a1][b1]='B';
                    q.push({a1,b1});
                    vis[a1][b1]=1;
                }
            }
                }
                
         }
        }
        return board;
    }
};