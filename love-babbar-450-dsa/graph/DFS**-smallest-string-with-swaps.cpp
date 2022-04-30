//https://leetcode.com/problems/smallest-string-with-swaps/
class Solution {
public:
    void dfs(int node,string&temp,vector<int>&index,vector<int>adj[],string &s,vector<int>&vis)
    {
        vis[node]=1;
        
        temp+=s[node];
        index.push_back(node);
        for(auto u:adj[node]){
            
            if(vis[u]==0){dfs(u,temp,index,adj,s,vis);}
        }
    }
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int n=s.size();
        vector<int>adj[n+1];
        vector<int>vis(n+1,0);
        string res=s;
        for(int i=0;i<pairs.size();i++)
        {
            int v=pairs[i][0],u=pairs[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        for(int i=0;i<n;i++)
        { 
            vector<int>index;
            string temp="";
            if(vis[i]==0)
            {
                //dfs for connected components
                dfs(i,temp,index,adj,s,vis);
                sort(temp.begin(),temp.end());
                sort(index.begin(),index.end());
                
                for(int j=0;j<temp.size();++j)
                {
                    res[index[j]] = temp[j];
                }
            }
        }
        return res;
        
        
    }
};