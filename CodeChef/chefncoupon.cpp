//https://www.codechef.com/START1C/problems/COUPON2
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;


void solve()
{
  int d,c,a1,a2,a3,b1,b2,b3;cin>>d>>c>>a1>>a2>>a3>>b1>>b2>>b3;
  int sum1=a1+a2+a3;
  int sum2=b1+b2+b3;
  int res=0,total=sum1+sum2+d+d;
  if(sum1>=150 && sum2>=150){res=sum1+sum2+c;} 
  else if(sum1>=150 && sum2<150 || sum1<150&& sum2>=150 ){res=sum1+sum2+c+d;}
  else if(sum1<150 && sum2<150){res=sum1+sum2+c+d+d;}
  
  if(res<total){cout<<"YES\n"; return ;}
  else{cout<<"NO\n";}
  
}

int main(){
    

  int t;cin>>t;
 
  while(t--)
  {
      solve();
  }
}