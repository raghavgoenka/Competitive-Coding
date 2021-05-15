//https://www.codechef.com/MAY21B/problems/THOUSES
#include <bits/stdc++.h>
#define flash ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

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
#define mod 1000000007
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<long,long>>vp;
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
typedef unordered_map<long long, long long> umll;
typedef map<long long ,long long>mll;

vll v[1000001];
 vll v1,vc;
  vp pp;
void leafnode(int node,int p)
{
     for(auto v:v[node])
   {
       if(v==p || v==1)continue;
       leafnode(v,node);
   }
 pp.clear();
   for(auto i:v[node])
   {
       if(i!=p && i!=1)
       pp.pb({vc[i],i});
   }
   sort(rall(pp));
   int ctr=1;
   for(auto i:pp)
   {
       v1[i.ss]=ctr;
       ctr++;
   }
   for(auto i:v[node])   
   {
       if(i!=p && i!=1)
       {
           vc[node]=(vc[node]+(v1[i]*vc[i]));
       }
   }

}



void solve(){
   
   
   ll n,x;cin>>n>>x;
    forf(int,i,n){v[i+1].clear();}
   vc.assign(n+1,1);
    v1.assign(n+1,0);
 
   umll mp_vl;
   
   x=x%mod;
   forf(ll,i,n-1)
   {  ll a,b;cin>>a>>b;
      
       v[a].pb(b);
       v[b].pb(a);
   
   }

   leafnode(1,0);
  

  ll res=((vc[1]%mod*x)+mod)%mod;
  cout << res <<endl;
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}