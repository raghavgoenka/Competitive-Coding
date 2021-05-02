#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(void)
{
	int t;cin>>t;
	while(t--)
	{
		long int a,b;
		if(a==1 && b==1){cout<<"1"<<"\n";continue;}
		long int sum;
		sum=a/2*b/2 + (a-(a/2))*(b-(b/2));
		cout<<sum<<"\n";
	}
}