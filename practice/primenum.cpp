#include<iostream>
#include <cmath>
#include<vector>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int arr[b+1];
	vector<int> v;
	for(int i=0;i<=b;i++)
	{
		arr[i]=1;
		
	}
	arr[0]=0;arr[1]=0;

	for(int i=2;i<=sqrt(b);i++)
	{
		if(arr[i]==1)
		{
			for(int j=2;i*j<=b;j++)
			{
				arr[i*j]=0;
			}
		}
	}
	for(int i=2;i<=b;i++)
	{
		if(arr[i]==1 && i>=a)
		{
			v.push_back(i);
		}
	}

	long int mul=a*b;
	long int div=(a*b)/4;
	int i=0,j=1;
	int count=0;
	while(i<v.size())
	{	
		if(v[i]*v[j]>=div && v[i]*v[j]<=mul)
		{
			cout<<v[i]<<","<<v[j]<<endl;
			count++;
			j++;
		}
		else{
			i++;
			j=i+1;
		}
	}
if(count==0)
{
 cout<<"0";
}


}