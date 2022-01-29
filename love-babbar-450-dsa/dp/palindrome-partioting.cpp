//https://practice.geeksforgeeks.org/problems/palindromic-patitioning4845/1
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int palindromicPartition(string s)
    {
        // code here
        int n=s.size();
        int dp[n][n];
        for(int g=0;g<n;g++)
        {
            for(int i=0,j=g;j<n;j++,i++)
            {
                if(g==0)
                {
                    dp[i][j]=1;
                }
                else if(g==1)
                {
                    if(s[i]==s[j]){dp[i][j]=1;}
                    else{dp[i][j]=0;}
                }
                else{
                    if(s[i]==s[j]&&dp[i+1][j-1]==1){dp[i][j]=1;}
                    else{dp[i][j]=0;}
                }
            }
        }
        
        int res[n];
        
        res[0]=0;
        for(int i=1;i<n;i++)
        {
            if(dp[0][i]==1){res[i]=0;continue;}
            int mn=INT_MAX;
            for(int j=i;j>=1;j--)
            {
                if(dp[j][i]==1&&res[j-1]<mn){mn=res[j-1];}
            }
            res[i]=mn+1;
        }
        return res[n-1];
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends