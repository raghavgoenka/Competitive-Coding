//https://codeforces.com/contest/1196/problem/B
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
 int n,k;cin>>n>>k;
 vi v;
 forf(int,i,n){int p;cin>>p; if(p%2!=0){v.pb(i);}}  
 
  if(v.size()<k){cout<<"NO"<<endl;return;}
 else if(v.size()==k)
 {
     cout<<"YES"<<endl;
     for(int i=1;i<v.size();i++){cout<<v[i]<<" ";}
     cout<<n<<endl;
     return;
 }
 else if(v.size()%2==0&&k%2==0 || v.size()%2!=0 && k%2!=0)
 { cout<<"YES"<<endl;
     for(int i=1;i<=k-1;i++)
     {
         cout<<v[i]<<" ";
     }
     cout<<n<<" "<<endl;
 }
 else{cout<<"NO"<<endl;return;}


}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}