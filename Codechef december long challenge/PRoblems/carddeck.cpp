//https://codeforces.com/problemset/problem/1492/B

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
        int idx[n+1]={0};
        vector<int> v;
       
        for(int i=0;i<n;i++){cin>>arr[i]; idx[arr[i]]=i;}
        
      int ss=n;
         if(n>1){
        while(n>1){
        
            int index=idx[ss];
            ss--;
          if(index==-1){ continue; }
         
           for(int j=index;j<n;j++)
           { 
               idx[arr[j]]=-1;
               v.push_back(arr[j]);
           }
         
            n=n-(n-index);
             
             if(n==1){v.push_back(arr[0]);break;}
            
        }}
        else{v.push_back(arr[0]);}
       
     for(int i =0;i<v.size();i++){cout<<v[i]<<" ";}
        cout<<"\n";
    }  

    
}
