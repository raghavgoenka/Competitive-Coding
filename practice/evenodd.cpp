
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
    {
     cin>>arr[i];
    }
    sort(arr,arr+n);
    int i=0,j=0;
    while(i<n)
    {
     if(arr[i]%2==0)
      {
         cout<<arr[i]<<" ";
	 for(int j=j;j<n;j++)
         { if(arr[j]%2!=0)
            {cout<<arr[j]<<" ";}
          }
	 j++;

         i++;
       }
      else{
            i++;
           }
    }
}
