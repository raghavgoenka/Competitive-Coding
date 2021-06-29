//https://codeforces.com/contest/1334/problem/A
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
   forf(int,i,n){
       int a,b;cin>>a>>b;
       v.pb({a,b});
   }
   string res="YES";
   int diff_a=0,diff_b=0;
   if(n==1)
   {
        if(v[0].first<v[0].second){cout<<"NO"<<endl;return;}
   }
   forf(int,i,n-1)
   {
       diff_a=v[i+1].first-v[i].first;
       diff_b=v[i+1].second-v[i].second;
       if(diff_a<0||diff_b<0){res="NO";break;}
       else if(diff_b>diff_a){res="NO";break;}
       else if(v[i].first<v[i].second){res="NO";break;}
      
   }
   cout<<res<<endl;
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}