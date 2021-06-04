#include <iostream>
using namespace std;

int main(void)
{
	int t;cin>>t;
	while(t--)
	{
		string s;cin>>s;
		int count=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='A' ||s[i]=='O'|| s[i]=='D' ||s[i]=='P'|| s[i]=='R' || s[i]=='Q')
				{count++;}
			else if(s[i]=='B'){count+=2;}

		}
		cout<<count<<endl;
	}
}