//https://www.codechef.com/START1C/problems/COUPON2
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;


void solve()
{
  ll s;cin>>s;
  ll intro[s];
  
  ll sumlen=0;
  for(int i=0;i<s;i++){cin>>intro[i];}
  for(int i=0;i<s;i++)
  {
      ll s1;cin>>s1;
      ll epi[s1];
     ll indelen=0;
      for(int p=0;p<s1;p++)
      {
         cin>>epi[p];
        indelen+=epi[p] ;         
      }
      sumlen+=indelen-(s1-1)*intro[i];

      
  }
  cout<<sumlen<<"\n";
  
}

int main(){
    

  int t;cin>>t;
 
  while(t--)
  {
      solve();
  }
}