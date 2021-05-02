#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n,q;cin>>n>>q;
	long int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	while(q--)
	{
		long int l,r;cin>>l>>r;
		l--;r--;
		long int i=l,j=i+1,inco=0,deco=0;
		if(l==r){cout<<"Yes"<<endl;}
		else{
		while(i<r && j<=r)
		{
			if(arr[i]<=arr[j])
			{	if(deco==1){inco=222;break;}
				inco=1;
				i++;
				j=i+1;
			}
			else if(arr[j]<=arr[i]){deco=1;i++;j=i+1;}
		}
		if(inco==1 && deco==1){cout<<"Yes"<<endl;}
		if(inco==0 && deco==1){cout<<"Yes"<<endl;}
        if(deco==0 && inco==1){cout<<"Yes"<<endl;}
		if(inco >1 && deco==1){cout<<"No"<<endl;}
        
	}
	}
}