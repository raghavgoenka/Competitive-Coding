#include<iostream>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,x;cin>>n>>x;
		if(n==1 || n==2){cout<<"1"<<endl;}
		else{n=n-2;
		int floornum=1;
		floornum+=n/x;
		if(n%x!=0){floornum++;}
		cout<<floornum<<endl;}
	}
	return 0;
}