//https://www.codechef.com/FZBZ21B/problems/MKGPLNKS
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
typedef map<char ,long long>mll;
void solve(){
   int n;cin>>n;
   string s;cin>>s;
   mll mp;
  forf(int,i,n){mp[s[i]]++;}
  if(mp.size()==1){cout<<"0"<<endl;return;}
  vi a,b;
  int c=1,d=1;
  forf(int,i,n){if(s[i]=='B'){a.pb(i);}else{b.pb(i);}}
  for(int i=1;i<a.size();i++)
  {
      if(a[i]-a[i-1]>1){c++;}
  }
  for(int i=1;i<b.size();i++)
  {
      if(b[i]-b[i-1]>1){d++;}
  }
  cout<<min(c,d)<<endl;

}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}