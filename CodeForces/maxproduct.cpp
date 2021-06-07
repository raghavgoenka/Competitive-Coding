//https://codeforces.com/contest/1406/problem/B
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
   ll n;cin>>n;
   ll arr[n];
   ll mul=1,neg=0,pos=0;
   forf(int,i,n){cin>>arr[i]; if(arr[i]<0){neg++;}else{pos++;} mul*=arr[i];}
   if(n==5){cout<<mul<<endl;return;}
   sort(arr,arr+n);
  //possibiltiy to generate positive numbers
  ll a1=arr[n-1]*arr[n-2]*arr[n-3]*arr[n-4]*arr[n-5];
  ll a2=arr[n-1]*arr[n-2]*arr[n-3]*arr[1]*arr[0];
  ll a3=arr[n-1]*arr[3]*arr[2]*arr[1]*arr[0];

  ll mx=max(a1,a2);
  mx=max(mx,a3);
  cout<<mx<<endl;
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}