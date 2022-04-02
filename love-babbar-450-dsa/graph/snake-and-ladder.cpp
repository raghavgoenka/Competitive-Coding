//https://leetcode.com/problems/snakes-and-ladders/submissions/
class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n=board.size();
        int last=n*n;
        vector<int>vis(last+1,0),dis(last+1,-1);
        queue<int>q;
        q.push(1);
        vis[1]=1;
        dis[1]=0;
        while(!q.empty())
        {
            int a=q.front();
            
            for(int i=1;i<=6&& i<=last-a;i++)
            { int v=i+a;
                int r= (n-1)-(v-1)/n;
                int c = (((v-1)/n & 1)==0) ? (v-1)%n : n-1-(v-1)%n;
                if(board[r][c]!=-1) v= board[r][c];
                if(vis[v])continue;
                q.push(v);
                dis[v]=dis[a]+1;
                vis[v]=true; 
            }
            q.pop();
        }
        return dis[last];
    }
};