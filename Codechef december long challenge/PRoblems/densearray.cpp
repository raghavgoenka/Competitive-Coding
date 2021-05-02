//https://codeforces.com/contest/1490/problem/A
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;

int main(void)
{
    int t;cin>>t;

   
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
      
    int count=0;
        for(int i=0;i<n;i++){scanf("%d",&arr[i]);}
       for(int i=0;i<n-1;i++)
       {
           float a=max(arr[i],arr[i+1]);
           float b=min(arr[i],arr[i+1]);
           float res=float(a/b);
         
           if(res>2){
            
               while((a/b)>2){count++;b=b*2;}
               
           }
       }
       
       cout<<count<<"\n";

        
    }  


}
