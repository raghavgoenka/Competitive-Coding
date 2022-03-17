//https://practice.geeksforgeeks.org/problems/possible-paths-between-2-vertices-1587115620/1/#
class Solution {
  public:
  int count =0;
  
  
    void dfs(vector<int> adj[],int s,int d)
    {
       if(s==d){
          
          count++;
          return ;
          }
      for(auto it:adj[s])
      { 
         dfs(adj,it,d);
      }
      
      return ;
      
    }
    // Function to count paths between two vertices in a directed graph.
    int countPaths(int V, vector<int> adj[], int s, int d) {
        // Code here
        
      
        if(s==d){return 1;}
        for(auto it:adj[s])
        {   
         dfs(adj,it,d);
        }
       
        return count;
    }
};