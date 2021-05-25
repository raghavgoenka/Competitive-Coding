//https://www.hackerearth.com/challenges/competitive/may-circuits-21/algorithm/blocked-matrix-ce17659d/
#include <bits/stdc++.h>
#define flash ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define endl "\n"
#define EPS 1e-9
#define MOD 1000000007
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
typedef vector<pair<int,int>>vp;
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
typedef unordered_map<long long, long long> umll;
typedef map<long long ,long long>mll;

vll fact(500003,1);
ll binpow(ll a,ll b)
{
	ll ans = 1;

	while(b>0)
	{
		if(b%2)ans=(ans*a)%MOD;
		a=(a*a)%MOD;
		b>>=1;
	}

	return ans;
}

ll inv(ll n)
{
	return binpow(n,MOD-2);
}

ll nCr(ll n,ll r)
{
	if(r==0 or r==n)return 1;

	if(n<r)return 0;

	ll num = fact[n];
	ll denm = (fact[r]*fact[n-r])%MOD;
	return (num*inv(denm))%MOD;

}
void solve(){
 ll n,m; cin>>n>>m;

   
   ll q=(n*m)-2;
  ll sum=0;
   sum=nCr(m+n-2,n-1);
 

   sum=(sum%MOD*(n-1)%MOD*(m-1)%MOD)%MOD;
    
 q= binpow(q%MOD,MOD-2);
 sum=((sum%MOD)*(q%MOD))%MOD;


cout<<sum%MOD<<endl;
}

int main(){
    
for(ll i=1;i<=500000;i++)fact[i]=(i*fact[i-1])%MOD;
    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}