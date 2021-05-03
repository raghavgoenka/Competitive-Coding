//https://www.spoj.com/problems/BUGLIFE/
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
int visited[1000001]={0};
int color[1000001]={0};
bool dfs(ll node,int c)
{
  visited[node]=1;
  color[node]=c;
  for(ll child:v[node])
  {
      if(visited[child]!=1){
          bool res=dfs(child,c^1);
          if(res==false){return false;}
          }
          else if(color[node]==color[child]){return false;}
  }
  return true;
}

void solve(int t){
   ll n,m;cin>>n>>m;
   forf(int ,i,n){v[i].clear();visited[i]=0;color[i]=0;}
   forf(int,i,m)
   {  ll a,b;cin>>a>>b;
       v[a].pb(b);
       v[b].pb(a);
   }
  bool flag=true;

   forf(int,i,n)
   {
       if(visited[i+1]!=1)
       {
          bool ans= dfs(i+1,0);
           if(ans==false){flag=false;}
       }
   }
   cout<<"Scenario #"<<t<<":"<<endl;
  if(flag==false){cout<<"Suspicious bugs found!"<<endl;}
  else{cout<<"No suspicious bugs found!"<<endl;}
 
}

int main(){
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;cin>>t;
    int i=1;
    while(i<=t){
        solve(i);
        i++;
    }
    
    return 0;
}