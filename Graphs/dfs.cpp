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

void solve(){
   ll n,m;cin>>n>>m;
   forf(int,i,m)
   {  ll a,b;cin>>a>>b;
       v[a].pb(b);
       v[b].pb(a);
   }
   // program to calculate connected components using dfs in graphs;
   ll con_components=0;
   forf(int,i,n)
   {
       if(visited[i+1]!=1)
       {
           dfs(i+1);
           cout<<endl;
        //    con_components++;
       }
   }
//   cout<<con_components<<endl;
//   if(con_components==1&&(m==(n-1))){cout<<"YES"<<endl;}
//   else{cout<<"NO"<<endl;}
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