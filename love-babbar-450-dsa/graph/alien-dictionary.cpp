//https://practice.geeksforgeeks.org/problems/alien-dictionary/1#
class Solution{
    public:
    int vis[301]={0};
    string ans="";
    void dfs(int node,vector<int>adj[])
    {
        vis[node]=1;
        for(auto it:adj[node])
        { 
            if(!vis[it]){dfs(it,adj);}
        }
        
        char c=node+'a';
        ans=c+ans;
    }
    string findOrder(string dict[], int n, int k) {
        //code here
        vector<int>adj[k+5];
        
        for(int i=0;i<n-1;i++)
        {
            string a=dict[i],b=dict[i+1];
            for(int j=0;j<min(a.size(),b.size());j++)
            {
                if(a[j]!=b[j])
                {
                    adj[a[j]-'a'].push_back(b[j]-'a');
                    break;
                }
            }
        }
        
        for(int i=0;i<k;i++)
        {
            if(!vis[i])
            {
                dfs(i,adj);
            }
        }

        return ans;
    }
};