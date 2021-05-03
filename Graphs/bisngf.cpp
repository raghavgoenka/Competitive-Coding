//https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/bishu-and-his-girlfriend/
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
typedef map<int,int>ml;
vll v[1000001];
int visited[1000001];
ml mp;
void dfs(ll node,int dis)
{
  visited[node]=1;
  mp[node]=dis;
//  cout<<node<<" "<<mp[node]<<endl;
  for(ll node:v[node])
  { 
      if(visited[node]!=1){dfs(node,mp[node]+1);}
  }
   
  return;
}

void solve(){
   ll n;cin>>n;
   ll m=n-1;
   forf(int,i,m)
   {  ll a,b;cin>>a>>b;
       v[a].pb(b);
       v[b].pb(a);
   }
  
  dfs(1,0);
//   for(auto i:mp){cout<<i.first<<" "<<i.second<<endl;}
  int q;cin>>q;
  int ans=0,mindis=1e9;
  while(q--)

{
    int g_city;cin>>g_city; 
    if(mp[g_city]<mindis){mindis=mp[g_city];ans=g_city;}
    else if(mp[g_city]==mindis && g_city<ans){ans=g_city;}
}
  cout<<ans<<endl;
 
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