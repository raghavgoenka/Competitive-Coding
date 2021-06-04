//codechef
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(void)
{
	int t;cin>>t;
	while(t--)
	{
		int n,k;cin>>n>>k;
		if(n==k){for(int i=1;i<=n;i++){arr[i-1]=i;}}
		else{
		int arr[n];

		if(n%2==0){for(int i=1;i<=n;i++){if(i%2==0){arr[i-1]=i;}else{arr[i-1]=-1*i;}}}
		else{for(int i=1;i<=n;i++){if(i%2!=0){arr[i-1]=i;}else{arr[i-1]=-1*i;}}}
		int kcount=n/2;
		if(kcount<k){for(int i=n;i>=1;i--){if(arr[i-1]<0){arr[i-1]*=-1; kcount++;}}}
		if(kcount>k){for(int i=n;i>=1;i--){if(arr[i-1]>0){arr[i-1]*=-1;kcount--;}}}
        }
		for(int i=0;i<n;i++){cout<<arr[i]<<" ";}
		cout<<"\n";
	}
}