//https://codeforces.com/problemset/problem/1486/A
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;


void solve()
{
   ll n;cin>>n;
   ll sum=0,index_sum=0;
   bool ok =true;
   for(int i=0;i<n;i++){
       ll num;cin>>num;
			sum+=num;
			index_sum+=i;
			ok&=(sum>=index_sum);
		}
		if(ok)
		{
			cout<<"YES"<<'\n';
		}
		else
		{
			cout<<"NO"<<'\n';
		}

}

int main(){
    

  int t;cin>>t;
 
  while(t--)
  {
      solve();
  }
}