/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
         int n=s.size();
        int dp[n][n];
         memset(dp, 0, sizeof(dp));
        for(int i=0;i<n;i++)
        {
            dp[i][i]=1;
        }
       
        string res="";
        res+=s[0];
       
        
        for(int g=1;g<n;g++)
        {
            int j=g;
            for(int i=0;j<n;j++,i++)
            {
                if(s[i]==s[j]&&g==1){dp[i][j]=1;}
                else if(s[i]==s[j]&&dp[i+1][j-1]==1){dp[i][j]=1;}
                if(dp[i][j]==1 && g+1>res.length()){
                    res=s.substr(i,g+1);
                }
               
            }
        }
        return res;
        
    }
};
// @lc code=end

