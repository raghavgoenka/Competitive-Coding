//https://www.codechef.com/LTIME102B/problems/RPDRDNG
#include <bits/stdc++.h>
#define flash ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define endl "\n"
#define mod 1000000007
#define EPS 1e-9
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forf(t,i,n) for(t i=0;i<n;i++)
#define forr(t,i,n) for(t i=n-1;i>=0;i--)
#define print(x) for(const auto &e: (x)) { cout<<e<<" "; } cout<<endl
#define F(i,a,b) for(int i = (int)(a); i <= (int)(b); i++)
#define RF(i,a,b) for(int i = (int)(a); i >= (int)(b); i--)

using namespace std;
#pragma GCC diagnostic ignored "-Wunused-variable" // Ignore unused variable warning
#pragma GCC diagnostic ignored "-Wunknown-pragmas" // Ignore unknown pragmas warning
#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimize("unroll-loops")

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
// GCD
ll gcd(ll a, ll b) { if (b == 0) { return a; } return gcd(b, a % b); }
 
// LCM
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

ll power(ll x,ll y)
{
    ll res = 1;
    while (y > 0)
    {
        if (y & 1){
            res=(res*x)%mod;
        }
        y=y>>1;
        x=(x*x)%mod;
    }
    return res%mod;
}

void solve(){
   ll n;cin>>n;
   vll v(2*n);
   mll mp;
   n=n*2;
   forf(ll,i,n){cin>>v[i];mp[v[i]]++;}
   if(n==2&&mp.size()==1){cout<<v[0]<<endl;return;}
   vll p;
   for(auto i:mp){p.pb(i.ff);}
   ll mid=p.size()/2;
   if(p.size()%2==0){mid--;}

sort(all(p));

   forf(ll,i,p.size())
   {   
      
        if((i==mid)&&mp[p[mid]]!=3){cout<<-1<<endl;return;}
       else if(i==(p.size()-1)&&mp[p[p.size()-1]]!=1){cout<<-1<<endl;return;}
        else if(mp[p[i]]!=2&&i!=mid&&i!=(p.size()-1)){cout<<-1<<endl;return;}

   }
   forf(int,i,p.size()){cout<<p[i]<<" ";}
cout<<endl;
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}