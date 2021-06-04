//https://codeforces.com/contest/115/problem/A
#include <bits/stdc++.h>

#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define endl "\n"
#define EPS 1e-9
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forf(t,i,n) for(t i=0;i<n;i++)
#define forr(t,i,n) for(t i=n-1;i>=0;i--)
#define print(x) for(const auto &e: (x)) { cout<<e<<" "; } cout<<endl

using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
typedef unordered_map<long long, long long> umll;

vll v[1000001];
int visited[1000001];
int c;
void dfs(int  node,int p)
{
    
  visited[node]=1;
  for(ll node:v[node])
  {
      if(visited[node]!=1){dfs(node,p+1);}
  }
  c=max(p,c);
  
}

void solve(){
   int n;cin>>n;
   forf(int,i,n)
   {  int a;cin>>a;
   if(a!=-1){
       v[a].pb(i+1);
   }
   }
 c=0;
   forf(int,i,n)
   {
       dfs(i+1,1);
    }
   cout<<c<<endl;
  return;
 
}

int main(){
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}