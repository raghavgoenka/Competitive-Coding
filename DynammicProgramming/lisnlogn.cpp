#include<iostream>
#include <bits/stdc++.h>
typedef long int ll;
using namespace std;



int longestIncreasingSubsequence(ll arr[],ll n)
{
   vector<ll>seq;
   seq.push_back(arr[0]);
   for(ll i=1;i<n;i++)
   {
    if(seq.back()<arr[i]){seq.push_back(arr[i]);}

    else
    {
      int idx=lower_bound(seq.begin(),seq.end(),arr[i])-seq.begin();
      seq[idx]=arr[i];
    }
   }
   
   


return seq.size();

}

int main(void)
{

	
	ll n;cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}

    cout<<longestIncreasingSubsequence(arr,n)<<endl;
}