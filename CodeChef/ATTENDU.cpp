#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(void)
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		string s;cin>>s;
		int pres=0;
         for(int i=0;i<n;i++)
         {
         	if(s[i]=='1'){pres++;}
         }
         double percen=(pres+120-n)/120;
         if(percen>75.00){cout<<"YES"<<endl;}
         else{cout<<"NO"<<endl;}
    }
}