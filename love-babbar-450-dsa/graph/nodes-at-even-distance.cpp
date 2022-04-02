//https://practice.geeksforgeeks.org/problems/nodes-at-even-distance0532/1#
class Solution{
    public:
    int countOfNodes(vector<int> graph[], int n)
    {
        // code here
        vector<int>vis(n+1,0),dis(n+1,0);
        queue<int>q;
        q.push(1);
        vis[0]=1;
        dis[0]=0;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(auto it:graph[node])
            {
                if(!vis[it])
                {
                    vis[it]=1;
                    dis[it]=dis[node]+1;
                    q.push(it);
                }
            }
        }
        int even=0,odd=0;
        for(int i=1;i<=n;i++)
        {
            if(dis[i]%2==0){even++;}
            else{odd++;}
        }
        return even*(even-1)/2 + odd*(odd-1)/2;
    }
};