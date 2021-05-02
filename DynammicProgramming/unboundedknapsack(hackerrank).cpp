#include <bits/stdc++.h>
#include<iostream>
using namespace std;


int unboundedKnapsack(int arr[],int n,int k)
{
    
  int dp[k+1]={0};
  int max=0;
  sort(arr,arr+n);
  for(int i=arr[0];i<=k;i++)
  {  
      for(int j=0;j<n;j++)
      {
       if(i==arr[j]){max=arr[j];break;}

       else if(arr[j]<i)
       {
           if(dp[i-arr[j]]>=0 && arr[j]+dp[i-arr[j]]>max)
           {   max=arr[j]+dp[i-arr[j]];
                if(max==i){break;}
            continue;
           }
       
          
       }
       else if(arr[j]>i){break;}

      }
      dp[i]=max;
  }
  
  return dp[k];
}





int main(void)
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        cout<<unboundedKnapsack(arr,n,k)<<endl;
    }
}
