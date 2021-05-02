//code chef october challenge Replace for X//
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

int main(void)
{
	int t;cin>>t;
	while(t--)
	{
		int n,x,p,k;cin>>n>>x>>p>>k;
		int arr[n];
		for(int i=0;i<n;i++)
		{cin>>arr[i];}
		sort(arr,arr+n);
		int count=0;
		while(1)
		{if(arr[p-1]==x){cout<<count<<endl;break;}
		 
		 else if(k>=p && arr[p-1]>=x){arr[k-1]=x;count++;sort(arr,arr+n);}
		 
		 else if(p>=k && arr[p-1]<=x){arr[k-1]=x;count++;sort(arr,arr+n);}
		 else{cout<<"-1"<<endl;break;}
		
		

		}
	}
}