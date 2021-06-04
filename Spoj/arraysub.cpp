#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
int main(void)
{
	int t;scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++){scanf("%d",&arr[i]);}
	int k;scanf("%d",&k);
    for(int i=0;i<=(t-k);i++)
    {
        int *max1=max_element(arr+i,arr+k+i);
        printf("%d ",*max1);
    }
}