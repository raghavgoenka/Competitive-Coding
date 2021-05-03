#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()

{
    int n,m;cin>>n>>m;
    long int arr[n+1]={0};
    int coin[m];

    for(int i=0;i<m;i++)
    {
        cin>>coin[i];
    }
    sort(coin,coin+m);
    arr[0]=1;
    for(int i=0;i<m;i++)
     {
       for(int p=coin[i];p<n+1;p++)
         {
            int ch=p-coin[i];
            if(arr[ch]>0)
             {arr[p]+=arr[ch];
             }
         }
     }
   cout<<arr[n]<<"";
   return 0;
}
