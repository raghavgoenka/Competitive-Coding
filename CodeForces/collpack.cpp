//https://codeforces.com/contest/1294/problem/B
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
   int n;cin>>n;
   vp v;
   forf(int,i,n)
   {
       int a,b;cin>>a>>b;
       v.pb({a,b});
   }
   sort(all(v));
   string ss="";
   int f=v[0].first,s=v[0].second,w=0,x=0;
   for(int i=1;i<n;i++)
   { if(v[i-1].first<v[i].first && v[i-1].second>v[i].second){cout<<"NO"<<endl;return;}
       if(v[i].first==f){s=max(s,v[i].second);}
       else if(v[i].first!=f)
       {
           for(int i=w;i<f;i++){ss+='R';}
           for(int i=x;i<s;i++){ss+='U';}
           w=f;
           x=s;
           f=v[i].first;
           s=v[i].second;
       }
   }
    for(int i=w;i<f;i++){ss+='R';}
    for(int i=x;i<s;i++){ss+='U';}
   cout<<"YES"<<endl;
   cout<<ss<<endl;
  
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}