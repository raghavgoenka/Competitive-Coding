#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string s;cin>>s;
	int n=s.length();
	int count=1;
	char p='B';
	for(int i=1;i<n;i++)
	{
		if(s[i]=='A' || s[i]=='E' || s[i] =='I' || s[i]== 'O' ||s[i]=='U')
		{	if(p!=s[i]){p=s[i];count++;}
			

			
		}
	}
	cout<<count<<endl;

}