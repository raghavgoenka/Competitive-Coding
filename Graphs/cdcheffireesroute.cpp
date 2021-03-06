//https://www.codechef.com/problems/FIRESC
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
#define N 1000000007
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
vll v[100009];
int visited[100009];
ll ss;

void dfs(ll node)
{
  visited[node]=1;
  ss++;
  for(ll child:v[node])
  {
      if(visited[child]!=1){dfs(child);}
  }
  return;
}

void solve(){
   ll n,m;cin>>n>>m;
   forf(int,i,n){visited[i+1]=0;v[i+1].clear();}
   forf(int,i,m)
   {  ll a,b;cin>>a>>b;
       v[a].pb(b);
       v[b].pb(a);
   }
   
  ll c=1;
   ss=0;
   ll con_components=0;
   forf(int,i,n)
   {
       if(visited[i+1]!=1)
       {  ss=0;
           dfs(i+1);
           con_components++;
           c=(c*ss)%N;
          
          
       }
       
       
   }

  cout<<con_components<<" "<<c<<endl;
  
}

int main(){
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}