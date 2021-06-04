#include<iostream>
using namespace std;

int numSquare(int base)
{
	if(base==0|| base==1 ||base==2 ||base==3)
		{return 0;}
	int squares=0;
	while(base>0)
	{
		base=base-2;
		if(base%2!=0){base--;}
		squares=base/2;
	}
	return squares;
}


int main(void)
{
	int t;cin>>t;
	while(t--)
	{
		int base;cin>>base;

		cout<<numSquare(base)<<endl;
		
	}
}
