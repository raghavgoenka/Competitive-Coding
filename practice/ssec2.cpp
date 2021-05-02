#include<iostream>
using namespace std;
int main()
{
	long int n;
	cin>>n;
	n=n/10;
	string s=to_string(n);
	int i=2;
	while(n>0)
	{
		if(n%i==0)
		{
			i++;
			n=n/10;
		}
		else{
			cout<<"No";
			break;
		}

	}
	cout<<i<<"i";
	if(i-1==(s.length()+1))
	{
		cout<<"Yes";
	}
}
