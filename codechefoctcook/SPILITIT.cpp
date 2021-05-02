#include <iostream>
using namespace std;

int main(void)
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int arr[26]={0};
		string s;cin>>s;
		for(int i=0;i<n;i++)
		{
			arr[s[i]-'a']++;
		}
		if(arr[s[n-1]-'a']>1){cout<<"YES"<<endl;}
		else{cout<<"NO"<<endl;}

	}
}	