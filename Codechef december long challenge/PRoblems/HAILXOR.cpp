#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
int main(void)
{
	int t;cin>>t;
	while(t--)
	{
		ll n,x;cin>>n>>x;
		ll arr[n];for(ll i=0;i<n;i++)cin>>arr[i];
		ll i=0,j=1;
        
		while(j<n && x-->0)
		{  
			ll p=(int)log2(arr[i]);
			ll pp=1<<p;
			arr[i]=arr[i]^pp;
			arr[j]=arr[j]^pp;
			if(arr[i]==0){i++;j++;}
 		  
		}
		if(x>0 && n==2 && x%2==1)
		{ll pow=(int)log2(arr[0]);
			ll ppow=1<<pow;
		    arr[0]^=ppow;arr[1]^=ppow;
		}
    		
       for(ll i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
}