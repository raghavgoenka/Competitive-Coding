//https://leetcode.com/problems/detonate-the-maximum-bombs/

class Solution {
public:
    int c=0;
    void dfs(int node,vector<int>adj[],vector<int>&vis)
    {
        vis[node]=1;
        c++;
        for(auto it:adj[node])
        {
            if(!vis[it]){
                dfs(it,adj,vis);
            }
        }
        return ;
    }
    int maximumDetonation(vector<vector<int>>& bomb) {
        int n=bomb.size(),m=bomb[0].size();
        vector<int>adj[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                double a,b,c,d;
                a=bomb[i][0],b=bomb[i][1];
                c=bomb[j][0],d=bomb[j][1];
                c=abs(c-a);
                c*=c;
                d=abs(d-b);
                d*=d;
                double dis=sqrt(c+d);
                
                if(dis<=bomb[i][2]){
                    adj[i].push_back(j);
                    }
                }
        }
        int mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            vector<int>vis(n,0);
            dfs(i,adj,vis);
            if(c>mx){mx=c;}
            c=0;
        }
        return mx;
    }
};