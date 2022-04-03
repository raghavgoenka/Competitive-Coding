//https://practice.geeksforgeeks.org/problems/path-of-greater-than-equal-to-k-length1034/1#
class Solution{
public:
    bool dfs(int node, vector<pair<int,int>>v[], vector<int>&vis,int k)
    {
        vis[node]=1;
        if(k<=0){return true;}
        
        for(auto it:v[node])
        {
            if(!vis[it.first])
            {
               if(it.second>=k){return true;}
               
               if(dfs(it.first,v,vis,k-it.second)){return true;}
            }
        }
        vis[node]=0;
        return false;
    }

    bool pathMoreThanK(int V, int E, int k, int *a) 
    { 
       //  Code Here
       vector<pair<int,int>>v[V];
       
       for(int i=0;i<E*3;i+=3)
       {
           v[a[i]].push_back({a[i+1],a[i+2]});
           v[a[i+1]].push_back({a[i],a[i+2]});
       }
       vector<int>vis(V,0);
       return dfs(0,v,vis,k);
       
       
    } 
};
