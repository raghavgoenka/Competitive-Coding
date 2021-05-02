#include <iostream>
using namespace std;

int main(void)
{
	int t;cin>>t;
	while(t--)
	{
		int count=0;
		long int l,r;cin>>l>>r;
		if(l==1){cout<<"-1"<<endl;}
		else if(r%l==0){cout<<"-1"<<endl;}
         else{
         for(long int i=l+1;i<=r;i++)
         {	if(i%l==0 ){
         	cout<<"yes";continue;}if(i%r!=0){cout<<"yyes";continue;}
         	long int sum=i%l;
         	count=0;
         	for(long int j=l+1;j<=r;j++)
         	{
         		if(sum>(i%j)){sum=i%j;}
         		else{
         			count=1;
         			break;}
         	}
         	if(count==0){cout<<i<<endl;break;}
         
         }
         		if(count==1){cout<<"-1"<<endl;}
         }
		}

	}
	