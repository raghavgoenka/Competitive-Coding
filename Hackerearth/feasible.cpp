//https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/feasible-relations/
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
typedef vector<pair<int,int>>vpp;
typedef unordered_map<long long, long long> umll;
vll v[1000001];
int visited[1000001];
int connected[1000001];
int curr_cc;
void dfs(ll node)
{
  visited[node]=1;
  connected[node]=curr_cc;
  for(ll child:v[node])
  {
      if(visited[child]!=1){dfs(child);}
  }
  return;
}

void solve(){
   ll n,m;cin>>n>>m;
   vpp pp;
    forf(int,i,n){visited[i+1]=0;v[i+1].clear();connected[i+1]=0;}
   forf(int,i,m)

   {  ll a,b;string s;cin>>a>>s>>b;
      if(s=="="){
       v[a].pb(b);
       v[b].pb(a);}
       else
       {  
           pp.pb({a,b});
       }
   }
   curr_cc=0;
   forf(int,i,n)
   {
       if(visited[i+1]==0)
       { 
           curr_cc++;
           dfs(i+1);
       }
   }
   bool flag=true;
   
    forr(int,i,pp.size()){
        int a1=pp[i].first;
        int b1=pp[i].second;
        if(connected[a1]==connected[b1]){flag=false;break;}
    }
    
    if(flag==true){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
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