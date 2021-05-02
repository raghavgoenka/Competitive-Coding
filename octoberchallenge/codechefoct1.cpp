//Chef and Easy Queries//

#include<iostream>
typedef long long ll;
using namespace std;
int main(void)
{
  int t;cin>>t;
  while(t--)
  { ll n,k;cin>>n>>k;
    ll arr[n];
    ll  sum=0;
    for(int i=0;i<n;i++)
     { cin>>arr[i]; }
    ll count=0,flag=0;
    for(int i=0;i<n-1;i++)
    {
    	if(arr[i]>=k){
    		count++;arr[i+1]+=arr[i]-k;
    	}
    	if(arr[i]<k){count++;flag=1;break;}
    }
    if(flag==0){
    	count+=arr[n-1]/k+1;
    }
    cout<<count<<endl;
}
 



}
