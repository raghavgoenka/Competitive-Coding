#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
int main(void)
{   ll arr[20]={1,2,5,12,27,58,121,248,503,1014,2037,4084,8179,16370,32753,65520,131055,262126,524269,1048556};
    ll fact=1;
    for(int i=1;i<=20;i++)
    {
         fact*=i;
         arr[i-1]+=fact;
    }
	int t;scanf("%d",&t);
    printf("%lld",arr[t-1]);
}