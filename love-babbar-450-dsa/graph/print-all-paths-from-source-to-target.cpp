//https://leetcode.com/problems/all-paths-from-source-to-target/
class Solution {
public:
     
  vector<vector<int>>res;
  vector<int>temp;
 
    void dfs(vector<vector<int>>& adj,int s,int d)
    {
     
      temp.push_back(s);
      if(s==d){
          res.push_back(temp);
          
          }
      for(auto it:adj[s])
      { 
         dfs(adj,it,d);
           
      }
     temp.pop_back();
      return ;
      
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& adj) {
       
        int d=adj.size()-1;
        
        for(auto it:adj[0])
        {   
            temp.push_back(0);
           
            dfs(adj,it,d);
          temp.clear();
         
        }
      
        
        return res;
    }
};