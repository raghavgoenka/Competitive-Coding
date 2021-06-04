//ques link https://www.spoj.com/problems/FASHION/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
int main(void)
{
    int n;scanf("%d",&n);
    while(n--)
    {
        int t;scanf("%d",&t);
        int m[t];
        int w[t];
        for(int i=0;i<t;i++){scanf("%d",&m[i]);}
        for(int i=0;i<t;i++){scanf("%d",&w[i]);}
        sort(m,m+t);
        sort(w,w+t);
        int sum=0;
        for(int i=0;i<t;i++){sum+=m[i]*w[i];}
        printf("%d\n",sum);
    }  
}