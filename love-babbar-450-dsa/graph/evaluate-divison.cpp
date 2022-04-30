//https://leetcode.com/problems/evaluate-division/
class Solution {
public:
    map<string,vector<pair<string,double>>>mp;
    vector<double>res;
    map<string,int>vis;
    double val=1.0;
    int flag=0;
    void dfs(string s,string e,double res)
    {   
        if(s==e){flag=1;val=res;return ;}
        vis[s]=1;
        for(auto i:mp[s])
        {
            string p=i.first;
            double a=i.second;
            if(vis[p]!=1){
            
                dfs(p,e,res*i.second);
            }
        }
       
        return ;
    }
    
vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
     int n=equations.size();
   
   
      for(int i=0;i<n;i++)
      {  double d=1.0/values[i];
       
          mp[equations[i][0]].push_back({equations[i][1],values[i]});
          mp[equations[i][1]].push_back({equations[i][0],(d)});
      }
    
    for(int i=0;i<queries.size();i++)
    {
        vis.clear();
        val=1.0;
        flag=0;
        if(mp.find(queries[i][0])==mp.end()||mp.find(queries[i][1])==mp.end()){res.push_back(-1.000);continue;}
        dfs(queries[i][0],queries[i][1],val);
        flag==1?res.push_back(val):res.push_back(-1.00);
        
    }
    
    return res;
        
    }
};