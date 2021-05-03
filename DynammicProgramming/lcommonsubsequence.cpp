#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

string lcs(int a[],int b[],int x,int y)
{
    int n=x;
    int n1=y;
    int dp[n+1][n1+1];
     for(int i=0;i<=n;i++){
        for(int j=0;j<=n1;j++){
            if(i==0 || j==0)
                dp[i][j]=0;
        }
    }

    for(int i=1;i<=n;i++)
    { for(int j=1;j<=n1;j++)
        {if(a[i-1]==b[j-1])
           {dp[i][j]=1+dp[i-1][j-1];}
         else
            {dp[i][j]=max(dp[i-1][j],dp[i][j-1]);}
        }
    }
   int i=n;
    int j=n1;
  string s="";
    while(i>0 && j>0){
        if(a[i-1]==b[j-1]){
            s+=to_string(a[i-1])+" ";
            i--;
            j--;
        }
        else{
            if(dp[i-1][j]>dp[i][j-1])
                i--;
            else 
                j--;
        }
    }
    reverse(s.begin(),s.end());
    return s;
}

int main(void)
{   int x,y;cin>>x>>y;
    int a[x],b[y];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<y;i++)
    {
        cin>>b[i];
    }
    cout<<lcs(a,b,x,y)<<endl;
}
