//https://www.youtube.com/watch?v=_0YjD1HcWW8&list=PL2q4fbVm1Ik4JdzE2Bv_UUGBz0TXEIrai&index=5
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
#define F(i,a,b) for(int i = (int)(a); i <= (int)(b); i++)
#define RF(i,a,b) for(int i = (int)(a); i >= (int)(b); i--)
#define mod 1000000007
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int,int>>vp;
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
typedef unordered_map<long long, long long> umll;
typedef map<long long ,long long>mll;
ll parent[100005];
ll find(ll a)
{  vl v;
    while(parent[a]>0){v.pb(a);a=parent[a];}
    for(int i=0;i<v.size();i++)
    {
        parent[v[i]]=a;
    }
    return a;
}
void union1( ll a,ll b)
{
    parent[a] += parent[b];	//this will contain total element in the set
	parent[b] = a;
}
void solve(){
   ll n,m;cin>>n>>m;
 memset(parent,-1,sizeof(parent));
   while(m--)
   {
       ll a,b;cin>>a>>b;
       a=find(a);
       b=find(b);
       if(a!=b){union1(a,b);}
   }
   ll res=1;
   for(int i=1;i<=n;i++)
   {
       if(parent[i]<0)
       {
           res=(res*abs(parent[i]))%mod;
       }
   }
   cout<<res<<endl;
}

int main(){
    

    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}