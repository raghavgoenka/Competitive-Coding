//https://www.spoj.com/problems/LASTDIG/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,a,res;
long long int b;
scanf("%d",&t);
while(t--)
{
scanf("%d %lld",&a,&b);
if(a==0 && b>0)
res=0;
else if(a>0 && b==0)
res=1;
else
{
if(b%4==0)// because all pattern are at most of length 4
b=4;
else
b=b%4;
long long int temp=pow(a,b);
res=temp%10;

}

printf("%d\n",res);
}
return 0;
}
