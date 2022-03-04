//https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1/
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

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
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(N, arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends