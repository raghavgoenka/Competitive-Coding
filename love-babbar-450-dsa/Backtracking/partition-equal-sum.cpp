//https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1#
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

 bool isSubsetSum(int n, int arr[], int sum){
        
        int dp[n+1][sum+1]={0};
        
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                
                if(i==0&&j==0){dp[i][j]=1;}
                
                else if(i==0)
                {
                    dp[i][j]=0;
                }
                else if(j==0){dp[i][j]=1;}
                
                else{
                    
                    if(dp[i-1][j]==1){dp[i][j]=1;}
                    else{
                        int t=arr[i-1];
                        if(j>=t)
                        {
                            if(dp[i-1][j-t]==1){dp[i][j]=1;}
                           
                        }
                       
                    }
                }
                
            }
            if(dp[i][sum]==1){return true;}
        }
        return dp[n][sum];
    }
    int equalPartition(int N, int arr[])
    {
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        if(sum%2!=0){return 0;}
        
        return isSubsetSum(N,arr,sum/2);
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends