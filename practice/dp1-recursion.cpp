#include <iostream>
using namespace std;

long int fibmemoized(int n,long int qb[])
{	

	if(n==0 || n==1)
	{
		return n;

	}
	if(qb[n] != 0)
	{
		return qb[n];
	}
	cout<<"Hello"<< n<<endl;
	long int fibnm1=fibmemoized(n-1,qb);
	long int fibnm2=fibmemoized(n-2,qb);
	long int fibnz=fibnm1+fibnm2;
	qb[n]=fibnz;
	return fibnz;

}

int main()
{
	int n;
	cin>>n;
	long int arr[n+1]={0};
	long fibn=fibmemoized(n,arr);
	cout<<fibn;

}

