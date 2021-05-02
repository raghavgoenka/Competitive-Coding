//https://www.spoj.com/problems/FIBOSUM/
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
#define mod 1000000007
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
ull fib(ull n)
{  ull p=5,q=2;
     double phi = ((1 + sqrt(p)) / q);
    ull po=pow(phi,n);
    ull ff=round(po / sqrt(p));
    cout<<ff%mod<<" ";
    return ff%mod;
}
  

ull calculateSum(ull l, ull r)
{
  
    
    ull sum = (fib(r + 2) - fib(l + 1))%mod;
    return sum;
}
 
void solve(){
   ull l,r;cin>>l>>r;
   cout<<endl;
    cout << calculateSum(l, r)<<endl;
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