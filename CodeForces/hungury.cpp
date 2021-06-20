//
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


 bool isPrime[10000000+1];
 vll v;
void seive() {
	ll N;
	N=10000001;
    
        for(ll i = 0; i <= N;++i) {
            isPrime[i] = true;
        }
        isPrime[0] = false;
        isPrime[1] = false;
        for(ll i = 2; i * i <= N; ++i) {
             if(isPrime[i] == true) {                    
                 for(ll j = i * i; j <= N ;j += i)
                     isPrime[j] = false;
            }
        }
		int count=0;
	for(ll i=2;i<N+1;i++)
   {
	   if(isPrime[i]==true)
	   {
		  v.pb(i);
	   }
   }
   
											
}

void solve(){
   ll n;cin>>n;
   for(int i=0;i<n;i++){cout<<v[i]<<" ";}
   
}

int main(){
    seive();

    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}