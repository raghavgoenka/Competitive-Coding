//https://www.codechef.com/LTIME92B/problems/EVENDIFF
//for every i n j pair
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;

int main(void)
{
    int t;cin>>t;

    
    while(t--)
    {
        int n;
        cin>>n;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            ll num;cin>>num;
            sum+=num;
        }
       if(sum%2==0){cout<<"1"<<"\n";}
       else{cout<<"2"<<"\n";}
    }  
}

