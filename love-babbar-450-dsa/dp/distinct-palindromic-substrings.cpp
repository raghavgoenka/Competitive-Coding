//https://practice.geeksforgeeks.org/problems/distinct-palindromic-substrings5141/1#
// C++ program to find all distinct palindrome sub-strings
// of a given string
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int palindromeSubStrs(string s) {
       int n=s.size();
      
        vector<vector<int>> dp(n,vector<int>(n,0));
        //  memset(dp, 0, sizeof(dp));
         map<string,int>mp;
        for(int i=0;i<n;i++)
        {
            dp[i][i]=1;
            mp[s.substr(i,1)]++;
        }
        
        for(int g=1;g<n;g++)
        {
            int j=g;
            for(int i=0;j<n;j++,i++)
            {
                 if(s[i]==s[j]&&g==1){dp[i][j]=1;mp[s.substr(i,j-i+1)]++;}
                else if(s[i]==s[j]&&dp[i+1][j-1]==1){dp[i][j]=1;mp[s.substr(i,j-i+1)]++;}
              
            }
        }
        return mp.size();
    }
};

// { Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.palindromeSubStrs(str) << endl;
    }
    return 0;
}
  // } Driver Code Ends