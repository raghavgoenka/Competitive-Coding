#include<iostream>
#include<string>
using namespace std;

int checks(string s,int left,int right)
{	int count=0;
	
	while(left>=0 && right<s.length())
	{
		if(s[left]!=s[right])
		{
			count=right;
			break;
		}
		else{
			count=-1;
			left--;
			right++;
		}
	}
	return count;
}

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		string s;
		cin>>s;
		int n=s.length();
		int mid ,left,right;
		if(n%2!=0)
		{
			left=(n/2)-1;
			right=(n/2)+1;
		}
		else{
			left=(n/2)-1;
			right=(n/2);
		}

		int check=checks(s,left,right);
		cout<<check<<endl;
	}
}