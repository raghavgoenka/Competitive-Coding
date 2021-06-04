//https://codeforces.com/problemset/problem/1492/A




#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;

int main(void)
{
    int t;cin>>t;

    
    while(t--)
    {
        ll p,a,b,c;
        cin>>p>>a>>b>>c;
        ll res=INT_MAX;
        ll min1=(a-(p%a))%a;
        ll min2=(b-(p%b))%b;
        ll min3=(c-(p%c))%c;
      
        res=min(min1,min2);
        res=min(min3,res);
        cout<<res<<"\n";
        
    }  
}

