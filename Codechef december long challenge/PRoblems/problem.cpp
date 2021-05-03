#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{  int arr[11]={0,1,0,0,0,0,0,1,0,2,1};
    int t;scanf("%d",&t);
    while(t--)
    {
        string s;cin>>s;
        long int count=0;
        for(int i=0;i<s.length();i++)
        {
           int index=s[i]-'0';
           count+=arr[index+1];
        }
        printf("%ld\n",count);

    }
}