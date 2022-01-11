/*
 * @lc app=leetcode id=647 lang=cpp
 *
 * [647] Palindromic Substrings
 */

// @lc code=start
class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        int dp[n][n];
         memset(dp, 0, sizeof(dp));
        for(int i=0;i<n;i++)
        {
            dp[i][i]=1;
        }
        int c=n;
        for(int g=1;g<n;g++)
        {
            int j=g;
            for(int i=0;j<n;j++,i++)
            {
                if(s[i]==s[j]&&g==1){dp[i][j]=1;c++;}
                else if(s[i]==s[j]&&dp[i+1][j-1]==1){dp[i][j]=1;c++;}
               
            }
        }
        return c;
    }
};
// @lc code=end

