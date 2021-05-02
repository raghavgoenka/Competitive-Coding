#include<iostream>

using namespace std;
int main()
{
	int t;cin>>t;
	while(t-->0)
	{
		int a,d,k,n,inc;cin>>a>>d>>k>>n>>inc;
		int count=a;
		int p=2;
		for(int i=2;i<=n;i++)
		{
			if(p<=k)
			{
				count+=d;
				p++;

			}
			else{
				d=d+inc;
				count+=d;
				p=2;
			}
		}
		cout<<count<<endl;
	}

}