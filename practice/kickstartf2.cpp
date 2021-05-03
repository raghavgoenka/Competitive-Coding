#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;cin>>t;
    int i=1;
    while(t--)
    {
        long long int n,k;cin>>n>>k;
        vector<long int> v;
        for(long long int i=0;i<n;i++)
        { long long  int a,b;
            cin>>a>>b;
            v.push_back(a);
            v.push_back(b);
        }
        sort(v.begin(),v.end());
        long  j=1,count=1,i=0;
        long  max=v[0]+k,left=k;
        while( i<=v.size()-1 &&j<v.size())
        {
            count+=(v[j]-v[i])/k;
            i++;
            j++;
        }
        






        cout<<"Case "<<"#"<<i<<": "<<count<<endl;
        i++;
    }
    
    
    
}