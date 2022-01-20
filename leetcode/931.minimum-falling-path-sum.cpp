/*
 * @lc app=leetcode id=931 lang=cpp
 *
 * [931] Minimum Falling Path Sum
 */

// @lc code=start
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        int dp[n][m];
   
       
            for(int j=0;j<m;j++){dp[n-1][j]=mat[n-1][j];}
        
        for(int i=n-2;i>=0;i--)
        {  
            for(int j=0;j<m;j++)
            {int a=INT_MAX,b=INT_MAX,c=INT_MAX;
               if(i+1<n&&j+1<m)
               {
                   a=dp[i+1][j+1];
               }
               if(i+1<n&&j<m){b=dp[i+1][j];}
             if(i+1<n&&j-1>=0){c=dp[i+1][j-1];}
             
             dp[i][j]=min(a,min(b,c))+mat[i][j];
                   
            }
        }
        int res=INT_MAX;
        for(int i=0;i<m;i++){res=min(res,dp[0][i]);}
        return res;
    }
};
// @lc code=end

