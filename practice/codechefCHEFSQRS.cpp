#include <iostream>
using namespace std;

int main(void)
{
	int t;cin>>t;
	while(t--)
	{
		long long int n;cin>>n;
		if(n==1||n==2 || n==4){cout<<"-1"<<endl;}

		else if(n%2!=0)
		{
			long long int p=((n-3)/2)+1;
			n+=pow(p,2);
			cout<<sqrt(n)<<endl;
		}
		else if(n%4==0)
		{
			long long int a=((n-8)/4)+1;
			n+=pow(a,2);
			cout<<sqrt(n)<<endl;
		}
		else{cout<<"-1"<<endl;}

	}
}