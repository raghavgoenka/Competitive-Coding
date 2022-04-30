//https://leetcode.com/problems/path-with-minimum-effort/
class Solution {
public:
   
    int bfs(vector<vector<int>>&heights,int &k)
    {
       queue<pair<int,int>>q;
        int n=heights.size(),m=heights[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        q.push({0,0});
        int dx[]={0,0,-1,1};
        int dy[]={-1,1,0,0};
        while(!q.empty())
        {
            int a=q.front().first;
            int b=q.front().second;
            q.pop();
            if(a==n-1&&b==m-1){return 1;}
            for(int i=0;i<4;i++)
            {
               int x=a+dx[i];
                int y=b+dy[i];
                if(x>=0&&x<n&&y>=0&&y<m&&vis[x][y]!=1)
                {
                    if(abs(heights[x][y]-heights[a][b])<=k)
                    {
                        q.push({x,y});
                        vis[x][y]=1;
                    }
                }
            }
        }
        return 0;
    }
    int minimumEffortPath(vector<vector<int>>& heights) {
        int l=0,r=1e6;
        
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(bfs(heights,mid)){r=mid-1;}
            else{l=mid+1;}
        }
        return l;
    }
};




