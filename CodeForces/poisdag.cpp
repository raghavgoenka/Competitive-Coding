//https://codeforces.com/contest/1613/problem/C
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
ll n,h;
vll v;
bool ch(ll x)
{
    ll c = 0;
    for(ll i=1;i<n;i++)
    {
        ll diff = v[i]-v[i-1];
        
        c+=min(diff,x);
    }
    c+=x;
    if(c>=h)
    return true;
    else return false;
}
void solve()
{
    cin >> n >> h;
    v.assign(n,0);
   forf(int,i,n)
    {
        cin >> v[i];
    }

    ll l=0,r=1e18;

    while(l+1<r)
    {
        ll m = (l+r)/2;
        if(ch(m))
        {
            r=m;
        }
        else l = m;
    }
    cout << r <<endl;

}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}