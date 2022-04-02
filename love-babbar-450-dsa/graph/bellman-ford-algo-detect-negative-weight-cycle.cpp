//https://practice.geeksforgeeks.org/problems/negative-weight-cycle3504/1#
class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    // Code here
	    int mx=1e8;
	    vector<int>dis(n,mx);
	    dis[0]=0;
	    for(int i=1;i<=n-1;i++)
	    {
	        for(auto it:edges)
	        {
	            if(dis[it[0]]+it[2]<dis[it[1]])
	            {
	                dis[it[1]]=dis[it[0]]+it[2];
	            }
	        }
	    }
	    for(auto it:edges)
	        {
	            if(dis[it[0]]+it[2]<dis[it[1]])
	            {
	               return 1;
	            }
	        }
	    return 0;
	}
};