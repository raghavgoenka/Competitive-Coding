#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		string s;
		cin>>s;
		vector <int> res(26,0);
		int c=0;
		for(int i=0;i<s.length();i++)
		{
			res[s[i]-'a']+=1;
		}
		for(int i=0;i<26;i++)
		{
			if(res[i]!=0)
				c++;
		}
		cout<<c<<endl;
	}

}