#include<iostream>
using namespace std;

int main()
{
	string seq[7]={"S","SS","SSE","SSEC","SSE","SS","S"};
	int t;
	cin>>t;
	while(t-->0)
	{
		int n;
		cin>>n;
		int p=n%7;
		if(p==0)
		{
			p++;
		}
		string s=seq[p];
		for(int i=0;i<s.length();i++)
		{
			cout<<int(s[i])<<" ";

		}
		cout<<"\n";
	}
}