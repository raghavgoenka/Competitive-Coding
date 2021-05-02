//Covid Run//
#include<iostream>
using namespace std;
int main(void)
{
	int t;cin>>t;
	while(t--)
	{
		int n,k,x,y;cin>>n>>k>>x>>y;
		int flag=0;
		int i=-1,p=x;
		// if(k>n){k=k-n;}
		// if(k!=0){i=n/k;}
		// if(k==0){
		// 	i=0;
		//     if(x==y){flag=1;}
		//     else{flag=0;}
		// }
		
		while(i!=p)
	   {   
	        if((x+k)%n==y){flag=1;break;}
	        x=(x+k)%n;
	        i=x;
		
		}
		if(flag==1){cout<<"YES"<<endl;}
		else{cout<<"NO"<<endl;}
	}
	
}