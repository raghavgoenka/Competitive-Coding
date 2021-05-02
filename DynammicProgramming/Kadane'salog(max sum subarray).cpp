#include <bits/stdc++.h>
#include <iostream>
using namespace std;




string maxSum(int arr[],int n)

{

    //To find max sum of subsequence!!
    sort(arr,arr+n);
    if(arr[n-1]<=0){sub=arr[n-1];}
    else{
        for(int i=0;i<n;i++){if(arr[i]>=0){sub+=arr[i];}}
    }
    string s=to_string(over)+" "+ to_string(sub);
    return s;
}








int main(void)
{
    int k;cin>>k;

    while(k--)
    {int n;cin>>n;    
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}

    cout<<maxSum(arr,n)<<endl;}    
}
