#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(void)
{
	int t;cin>>t;
	while(t--)
	{
		int n,d;cin>>n>>d;
		int arr[n];int risk=0;
		for(int i=0;i<n;i++){cin>>arr[i];if(arr[i]<=9 || arr[i]>=80){risk++;}}
		if(d==1){cout<<n<<"\n";}
		else{
	     int remdose=0,days=0,normal=0;
	    normal=n-risk;
	     days+=risk/d +1;
	     remdose=risk%d;

	    normal-=d-remdose;
	    days+=normal/d;
	    remdose=normal%d;
	    if(remdose!=0){days+=1;}
	    cout<<days<<"\n";
		}

	}
}