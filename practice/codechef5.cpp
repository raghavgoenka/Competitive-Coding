//KMP string pattern searching algorithm//
#include<iostream>
#include<string>
using namespace std;

void calculateLps(int lps[],int m,string pat)
{
	lps[0]=0;
	int len=0;

	int i=1;
	while(i<m)
	{
		if(pat[i]==pat[len])
		{
			len++;
			lps[i]=len;
			i++;
		}
		else
		{
			if(len!=0)
			{
				len=lps[len-1];
			}
			else
			{
				lps[i]=0;
				i++;
			}

		}
	}
	for(int i=0;i<m;i++)
	{
		cout<<lps[i]<<" ";
	}
}



int main()
{
	string s,pat;
	cin>>s>>pat;

	int l,m;
	l=s.length();
	m=pat.length();
	int lps[m];

	calculateLps(lps,m,pat);

}