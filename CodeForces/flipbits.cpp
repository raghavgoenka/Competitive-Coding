//https://codeforces.com/contest/1504/problem/B
#include <bits/stdc++.h>

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

using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
typedef unordered_map<long long, long long> umll;

void solve(){
   int n;cin>>n;
   string a,b;cin>>a>>b;
   vector<pair<int,int>> v;
   int one=0,zero=0,j=0;
   forf(int,i,n){
       if(a[i]=='0'){one++;}
       else{zero++;}
       if(one==zero){v.pb({j,i});j=i+1;}
        
   }
   for(auto i:v)
   {
       int is=i.first,jl=i.second;
       if(a[is]==b[is]){continue;}
       for(int k=is;k<=jl;k++){
           if(a[k]=='0'){a[k]='1';}
           else{a[k]='0';}
       }
   }
   if(a==b){cout<<"YES"<<endl;}
   else{cout<<"NO"<<endl;}
}

int main(){
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}