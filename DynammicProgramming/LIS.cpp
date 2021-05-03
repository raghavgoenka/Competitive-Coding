#include<iostream>
#include <bits/stdc++.h>
typedef long int ll;
using namespace std;



int longestIncreasingSubsequence(ll arr[],ll n)
{
   ll dp[n];dp[0]=1;
   for(ll i=0;i<n;i++)
   { ll max=0;
     for(ll j=0;j<i;j++)
      {
      	if(arr[i]>arr[j]){if(dp[j]>max){max=dp[j];}
      }
      dp[i]=max+1;
   }

}
return *max_element(dp,dp+n);

}

int main(void)
{

	 #ifndef ONLINE_JUDGE
	 freopen("i.txt","r",stdin);
	 freopen("output.txt","w",stdout);
     #endif
	ll n;cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}

    cout<<longestIncreasingSubsequence(arr,n)<<endl;
}