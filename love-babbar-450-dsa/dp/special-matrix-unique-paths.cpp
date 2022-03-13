//https://practice.geeksforgeeks.org/problems/special-matrix4201/1#
class Solution {
public:
long long mod=1000000007;
	int FindWays(int n, int p, vector<vector<int>>blocked_cells){
	    // Code here
	     int a=n,b=p;
        int dp[a][b];
        int m[a][b];
        memset(m,0,sizeof(m));
        int k=blocked_cells.size();
    for(int i=0;i<k;i++){
        m[blocked_cells[i][0]-1][blocked_cells[i][1]-1]=1;
    }
    
        
        if(m[0][0]==1||m[a-1][b-1]==1){return 0;}
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                if(m[i][j]!=1)
                {
                    if(i==0||j==0)
                    { if(i==0&&j==0){dp[i][j]=1;}
                     
                       else if(i==0){ dp[i][j]=dp[i][j-1]%mod;}
                       else if(j==0){dp[i][j]=dp[i-1][j]%mod;}              
                    }
                    else
                    {
                        dp[i][j]=(dp[i-1][j]%mod+dp[i][j-1]%mod)%mod;
                    }
                }
                else{
                    dp[i][j]=0;
                }
            }
            
        }
        return dp[a-1][b-1]%mod;
	}
};
