#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int absdiff(vector<int> arr)
{
  sort(arr.begin(),arr.end());
  long int i=0,j=2;
  long int n=arr.size();
  int min=arr[1]-arr[0];
  while(i<=n-1 && j<n)
  {
    if(abs(arr[j]-arr[i])<=min)
      { min=abs(arr[j]-arr[i]);
        
        j=++j+i;
      }
    else{
       i++;
      j=i+1;
   }

  }
return min;
}

int main()
{  int n;cin>>n;
   vector<int>arr;
   for(int i=0;i<n;i++)
   {
     int p;cin>>p;
     arr.push_back(p);
    }
    int res=absdiff(arr);
    cout<<res;
}
