//https://codeforces.com/problemset/problem/1517/B
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
bool sortcol( const vector<ll>& v1,
               const vector<ll>& v2 ) {
 return v1[1] < v2[1];
}
void solve(){
   int n,m;cin>>n>>m;
   vll vp[n];
   forf(int,i,n)
   {
       forf(int,j,m){ll num;cin>>num;vp[i].pb(num);}
       vp[i].sort();
      ll temp=vp[i][i+1];
      vp[]
   }
   ll sum=0,mn=LONG_MAX;;
  forf(int,i,n){
      forf(int,j,n){mn=min(mn,vp[j][i]);}
      sum+=mn;
      mn=LONG_MAX;
  }
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