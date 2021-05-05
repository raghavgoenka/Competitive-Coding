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
		ll index=0,j=1;
        int count=0;
		while( x-->0 && index<n-1)
		{
		  //  if(arr[i]==0){i++;x++;continue;}
			ll p=(int)log2(arr[index]);
			ll pp=1<<p;
			arr[index]^=pp;
			
			for(ll ind=index+1;ind<n;ind++){ ll co=arr[ind]^pp; if(co<arr[ind]){arr[ind]^=pp;count=1;j=ind;break;}}
			if(count==0){arr[n-1]^=pp;}
		
			if(arr[i]==0){i++;}
 		  
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