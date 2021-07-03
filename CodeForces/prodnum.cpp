//https://codeforces.com/contest/1294/problem/C
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
  vl v;
  ll p=n;
  for(int i=2;i*i<=n;i++)
  {
      if(n%i==0)
      {
          v.pb(i);
          n=n/i;
      }
  }
  v.pb(n); // we r decreasing so it is less than actual n;
  if(v.size()<3){cout<<"NO"<<endl;return;}
  else if(v.size()>=3)
  {
      int a=v[0];
      int b=v[1];
      int c=p/(a*b);
      if(c==1|| a==b || a==c || b==c){cout<<"NO"<<endl;return;}
      else{
          cout<<"YES"<<endl<<a<<" "<<b<<" "<<c<<endl;
      }
  }
 
  
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}