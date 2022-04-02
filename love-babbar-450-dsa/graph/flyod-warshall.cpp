//https://practice.geeksforgeeks.org/problems/implementing-floyd-warshall2042/1#

class Solution {
  public:
	void shortest_distance(vector<vector<int>>&mat){
	    // Code here
	    int n=mat.size();
	    for(int k=0;k<n;k++)
	    {
	        for(int i=0;i<n;i++)
	        {
	            for(int j=0;j<n;j++)
	            {
	                if(mat[i][k]==-1||mat[k][j]==-1||i==k||j==k||i==j){continue;}
	                else if(mat[i][j]==-1)
	                {
	                    mat[i][j]=mat[i][k]+mat[k][j];
	                }
	                else{
	                    mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
	                }
	            }
	        }
	    }
	}
};