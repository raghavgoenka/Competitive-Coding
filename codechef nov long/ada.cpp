#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr, arr + n, greater<int>());

		int diff=arr[0]-arr[1],sum=arr[0];
       for(int i=2;i<n;i++)
       {
       
       	diff=arr[i]-diff;
       	if(diff==0){sum+=diff;}
       }
       cout<<sum<<endl;
   }
return 0;
}