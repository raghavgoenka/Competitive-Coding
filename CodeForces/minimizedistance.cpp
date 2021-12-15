//https://codeforces.com/contest/1591/problem/C
#include <bits/stdc++.h>
#define flash ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define endl "\n"
#define EPS 1e-9
#define mod 10000000
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
typedef vector<pair<long long,long long>>vp;
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
typedef unordered_map<long long, long long> umll;
typedef map<long long ,long long>mll;
bool isPrime(ll n) 
{ 
if (n <= 1)  return false; 
if (n <= 3)  return true; 
if (n%2 == 0 || n%3 == 0) return false; 
for (ll i=5; i*i<=n; i=i+6) 
if (n%i == 0 || n%(i+2) == 0) 
return false; 
return true; 
} 
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
   ll n,k;cin>>n>>k;
   vl p,o;
   ll mx_pos=LLONG_MIN;
   ll mx_neg=LLONG_MIN;
   forf(ll,i,n)
   {
       ll x;cin>>x;
            
       if(x>=0){p.pb(x);mx_pos=max(mx_pos,x);}
      
       else{x=x*-1;o.pb(x);mx_neg=max(mx_neg,x);}
   }
   ll sum=0;
  
   sort(rall(p));
   sort(rall(o));
  
   
   for(int i=0;i<p.size();i+=k){sum+=p[i]*2;}
   
   for(int i=0;i<o.size();i+=k){sum+=o[i]*2;}
  
  if(o.size()==0){sum-=mx_pos;}
  else if(p.size()==0){sum-=mx_neg;}
  else{sum-=max(mx_neg,mx_pos);}
  cout<<sum<<endl;
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}