/*
 * @lc app=leetcode id=797 lang=cpp
 *
 * [797] All Paths From Source to Target
 */

// @lc code=start
class Solution {
    
public:
     vector<vector<int>> res;
     vector<int>ds;
    
      int t=0;
public:
    void dfs(int node,  vector<vector<int>> &graph)
    {
       ds.push_back(node);
        if(node==t){res.push_back(ds);}
      for(int nod:graph[node])
       {
          
          {dfs(nod,graph);}
      }
        ds.pop_back();
      return;
    }
    
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        int c=graph.size();
        t=c-1;;
         dfs(0,graph);
        return res;
    }
};
// @lc code=end

