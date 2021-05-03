//https://codeforces.com/problemset/problem/1490/C
#include<bits/stdc++.h>
#include<iostream>
#define N 1000000000001
using namespace std;
typedef long long int ll;
unordered_set<ll>s;

void solve()
{
   ll n;cin>>n;
  for(ll i=1;i*i*i<=n;i++)
  {
    ll a=i*i*i;
    if(s.count(n-a)){cout<<"YES\n";return;}
  }
  cout<<"NO\n";

}

int main(){
    for(ll i=1;i*i*i<=N;i++){s.insert(i*i*i);}

  int t;cin>>t;
 
  while(t--)
  {
      solve();
  }
}