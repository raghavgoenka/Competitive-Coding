#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
int main(void)
{
	int t;cin>>t;
	while(t--)
	{
	  int n;
	  long int arr[n];
	  for(int i=0;i<n;i++){cin>>arr[i];}
	  ll current=arr[0],overall=arr[0];
	vector<ll> v,m;
	v.push_back(arr[0]);
	for(int i=1;i<n;i++)
	{
		if(current>=0)
		{
			current+=arr[i];
			v.push_back(arr[i]);
		}
		else{
			current=arr[i];
			v.clear();
			v.push_back(arr[i]);
		}
		if(current>overall){overall=current; m=v;}
	}
     

	}

}