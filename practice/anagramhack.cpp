#include<iostream>
#include <string>

using namespace std;
int main()
{
	int t;cin>>t;
	while(t-->0)
	{	int count=0;
		string s;cin>>s;
		int n=s.length();
		if(n%2!=0)
		{
			cout<<"-1"<<endl;
			
		}
		else
		{
			string a=s.substr(0,n/2),b=s.substr(n/2,n);
			
			int v[26]={0};
			
			
			for(int i=0;i<(n/2);i++)
			{
				v[a[i]-'a']++;
			}
			for(int i=0;i<n/2;i++)
			{
				v[b[i]-'a']--;
			}

			for(int i=0;i<26;i++)
			{
				if(v[i]>0 )
				{	
					count=count+v[i];
					v[i]=0;
				}

			}
			cout<<count<<endl;
		}
	}
}