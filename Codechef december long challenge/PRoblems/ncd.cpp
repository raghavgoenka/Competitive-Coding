#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
int main(void)
{
	int t;scanf("%d",&t);
	while(t--)
	{
		int a,b;scanf("%d %d",&a,&b);
         
		int n=__gcd(a,b);
		
		int c=0;
		int sqr=sqrt(n);
		
		for(int i=1;i<=sqrt(n);i++)
		{ 
			 if(n%i==0){
			if((n/i)==i){c+=1;}
			else {c+=2;}
		}
		}

		printf("%d \n",c);
	}
}