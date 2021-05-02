//https://www.codechef.com/MARCH21C/problems/IRSTXOR
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
typedef unordered_set<long long> ls;

void solve(){
   ll a,d,p=1;cin>>a;
   
    d=(log2(a));
    ll low_p=d;
    ll high_p=d+1;
    ll maxm=0;
    ll num1=pow(2,low_p)-1;
    ll num2=(pow(2,high_p)-1)-(a-pow(2,low_p));
    maxm=num1*num2;
    cout<<maxm<<endl;
  
//    umll m;

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