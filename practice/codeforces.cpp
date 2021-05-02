#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		ll sum=1,count =0;
		ll root=sqrt(n);
		
		while(sum!=root)
		{
			sum++;count++;
		}
		while(sum<n)
		{
			sum+=root;
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}