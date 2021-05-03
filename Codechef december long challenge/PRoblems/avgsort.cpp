//https://www.codechef.com/LTIME93B/problems/AVGSORT

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;

int main(void)
{
    int t;
    cin>>t;

   
    while(t--)
    {
        int n;cin>>n;
        int c=0;
        ll arr[n];
        
        for(int i=0;i<n;i++){cin>>arr[i];}
      for(int i=0;i<n-1;i++)
      {
          if(arr[i+1]<=arr[i]){c++;}
      }
    if(c==(n-1)){cout<<"NO\n";}
    else{cout<<"YES\n";}
  

    }


   
}

