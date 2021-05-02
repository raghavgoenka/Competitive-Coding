//code chef POSAND october challenge// 
#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
   int t;cin>>t;
   while(t--){
   	int n;cin>>n;
   	if(n==1){cout<<"1";}
   if(n==3){cout<<"2 3 1";}
   if(n==5){cout<<"2 3 1 5 4";}

   if(ceil(log2(n)) == floor(log2(n)) && n>1){cout<<"-1";}
   else{
 
   
   if(n>5)
   {
   	long int arr[100005];arr[0]=2;arr[1]=3;arr[2]=1;arr[3]=5;arr[4]=4;
   	
   	for(long int i=6;i<=n;i++)
   	{
   		if(ceil(log2(i)) == floor(log2(i)))
   		{
   			arr[i-1]=i+1;
   			arr[i]=i;
   			
   			i+=1;
   		}
   		else{
   			arr[i-1]=i;
   		}
   	}
   	for(int i=0;i<n;i++)
   	{
   		cout<<arr[i]<<" ";
   	}
   }
  
}
 cout<<"\n";
}
}



