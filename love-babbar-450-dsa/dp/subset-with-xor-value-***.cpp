//https://practice.geeksforgeeks.org/problems/subsets-with-xor-value2023/1#
class Solution{
public:
    int subsetXOR(vector<int> nums, int N, int K) {
        vector<vector<int>> dp(21,vector<int>(129,0));
       dp[0][0]=1;
       for(int i=1;i<=N;i++)
           for(int j=0;j<=128;j++)
               dp[i][j]=dp[i-1][j]+dp[i-1][j^nums[i-1]];
       return dp[N][K];
    }
};
