#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
int main(void)
{
	int t;scanf("%d",&t);
	while(t--)
	{
	    long long int a;cin>>a;
        long int c=0;

		for(long int i=5;a/i>=1;i*=5)
        {
            c+=a/i;
        }

        cout<<c<<"\n";
	}
}