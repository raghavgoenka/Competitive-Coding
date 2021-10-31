//https://codeforces.com/contest/1547/problem/A
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
   int xa,ya,xf,yf,xb,yb;
   cin>>xa>>ya>>xb>>yb>>xf>>yf;
   if(xa==xb&&xf==xa && yf<max(ya,yb)&&yf>min(ya,yb))
   {
       cout<<abs(yb-ya)+2<<endl;
   }
   else if(ya==yb&&ya==yf&& xf<max(xa,xb)&& xf>min(xa,xb))
   {
       cout<<abs(xb-xa)+2<<endl;
   }
   else{
       cout<<abs(xb-xa)+abs(yb-ya)<<endl;
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