#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
int main(void)
{
	int t;scanf("%d",&t);
    vector<int> v;
	while(t!=42)
	{
	  
        v.push_back(t);
        scanf("%d",&t);
	}
    for(int i=0;i<v.size();i++){cout<<v[i]<<"\n";}
}