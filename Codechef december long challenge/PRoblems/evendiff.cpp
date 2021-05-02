//https://www.codechef.com/LTIME92B/problems/EVENDIFF
//for every i n j pair

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(void)
{
    int t;cin>>t;

    
    while(t--)
    {
        int n,odd=0,even=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int num;cin>>num;
            if(num%2==0){even++;}
            else{odd++;}
        }
       if(odd>even){cout<<even<<"\n";}
       else{cout<<odd<<"\n";}
    }  
}