#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef vector<long long> vll;
vll v[1000001];
int visited[1000001];

void dfs(ll node)
{
  visited[node]=1;
  cout<<node<<" ";
  for(ll node:v[node])
  {
      if(visited[node]!=1){dfs(node);}
  }
  return;
}



int main(){
    
 ll n,m;cin>>n>>m;
   for(int i=0;i<m;i++)
   {  ll a,b;cin>>a>>b;
       v[a].push_back(b);
       v[b].push_back(a);
   }
 
   for(int i=0;i<n;i++)
   {
       if(visited[i+1]!=1)
       {
           dfs(i+1);
           cout<<endl;
      
       }
   }
    
    return 0;
}