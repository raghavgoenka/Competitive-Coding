//https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/social-networking-graph/
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
typedef queue<long int>qp;
typedef unordered_map<long long, long long> umll;
vll v[1000001];
int visited[1000001]={0},dis[1000001]={0};
int r,c=0;
void bfs(ll src)
{
   qp q;
   q.push(src);
   visited[src]=1;
   dis[src]=0;
   while(!q.empty())
   {
       int current=q.front();
       q.pop();
       for(int child:v[current])
       { if(visited[child]!=1)
          { q.push(child);
            
           dis[child]=dis[current]+1;
           if(dis[child]==r){c++;}
           visited[child]=1;
       }}
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
  ll q;cin>>q;
  while(q--)
  {
      int l;cin>>l>>r;
      for(int i=0;i<=n;i++){visited[i]=0;dis[i]=0;}
        bfs(l);
        cout<<c<<endl;
        c=0;
  }
   
    
     
  
  

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