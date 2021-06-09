//https://codeforces.com/contest/1392/problem/B
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
void solve(){
   ll n,k;cin>>n>>k;
   ll arr[n],mx=LONG_MIN,mx1=LONG_MIN;
   forf(int ,i,n){cin>>arr[i];if(arr[i]>mx){mx=arr[i];}}
   vl v1,v2;
   forf(int,i,n){v1.pb(mx-arr[i]);if(v1[i]>mx1){mx1=v1[i];}}
   forf(int,i,n){v2.pb(mx1-v1[i]);}
   if(k%2!=0)
   {
       forf(int,i,n){cout<<v1[i]<<" ";}
   }
   else{
       forf(int,i,n){cout<<v2[i]<<" ";}
   }
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