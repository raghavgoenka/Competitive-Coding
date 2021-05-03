#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t-->0)
    {
        int n;cin>>n;
        int arr[n];vector<int>count(n,0);
        for(int i=0;i<n;i++){ cin>>arr[i]; }
        int sum=1,check=arr[1]-arr[0];
        for(int i=2;i<=n-1;i++)
        {
            if(arr[i]-arr[i-1]==check)
            {
                sum++;
            }
            else{
                count.push_back(sum+1);
                sum=1;
                check=arr[i]-arr[i-1];
            }
            
        }
        cout << "Case #"<<t<<":"
         << *max_element(count.begin(), count.end())<<endl; 
        
    }
}