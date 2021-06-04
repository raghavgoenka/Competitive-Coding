//https://www.codechef.com/LTIME92B/problems/DREDIV


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;

int main(void)
{
    int t;cin>>t;

    
    while(t--)
    {
        int n;ll k;
        cin>>n>>k;

        ll arr[n];
        for(int i=0;i<n;i++){cin>>arr[i];}
        while(k%2==0)
	   { k/=2;}
	   int c=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]%k!=0)
	        {
	            c=1;
	        }
	    }
     if(c==0){cout<<"YES\n";}
     else{cout<<"NO\n";}
        
    }  
}

