//https://www.codechef.com/START1C/problems/MVALUE
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;


void solve()
{
   ll n;cin>>n;
   ll arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    sort(arr,arr+n);
    ll a=arr[n-1];
    ll b=arr[n-2];
    ll c=arr[0];
    ll d=arr[1];
    ll res=a*b+(a-b);
    ll res1=c*d+abs(c-d);
    ll mm=max(res,res1);
    cout<<mm<<"\n";
   
}

int main(){
    

  int t;cin>>t;
 
  while(t--)
  {
      solve();
  }
}