//https://practice.geeksforgeeks.org/problems/rod-cutting0840/1#
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRod(int price[], int n) {
        //code here
        int dp[n+1];
        for(int i=1;i<=n;i++){dp[i]=price[i-1];}
        
        for(int i=2;i<=n;i++)
        {
            int mx=dp[i];
            for(int j=1;j<=(i)/2;j++)
            {
                mx=max(dp[j]+dp[i-j],mx);
            }
            dp[i]=mx;
           
        }
        return dp[n];
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends