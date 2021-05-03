#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(void)
{
	int v1,v2,d1,d2,p;
	cin>>d1>>v1>>d2>>v2>>p;

	int sum=0;int days=0;  
	if(d1==d2)
	{sum=v1+v2;
		days=d1-1 + p/sum;
      if(p%sum==0){cout<<days;}
      else{cout<<days+1;}
	}

	else
	{ 
	 int x,y,value=0,sum=0,days=0,extra;
	 if(d1>d2){x=d2;y=d1;sum=v2;extra=v1;}
	 else{x=d1;y=d2;sum=v1;extra=v2;}
     days=x-1;
	 for(int i=x;i<y;i++)
	 {
	 	value+=sum;
         days++;
	 	if(value>=p){cout<<days;break;}

	 }
	 if(value<p)
	 {
       sum+=extra;
       p=p-value;
       days=p/sum;
        if(p%sum==0){cout<<days;}
      else{cout<<days+1;}
	 }
}
}