//https://codeforces.com/contest/1245/problem/C
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
#define mod 1000000007
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
 int dp[100005][2];
void solve(){
  string s;cin>>s;
   int n=s.length();
 
    forf(int,i,n) {
        if (s[i] == 'm' || s[i] == 'w') {
            cout << 0 << endl;
            return ;
        }
    }
 
    dp[0][0] = 1;
    dp[1][0] = 1;
    for(int i = 1; i < n; i++) {
        dp[i + 1][0] = (dp[i][0] + dp[i][1]) % mod;
        if (s[i - 1] == 'n' && s[i] == 'n' || s[i - 1] == 'u' && s[i] == 'u') {
            dp[i + 1][1] = (dp[i - 1][0] + dp[i - 1][1]) % mod;
        }
    }
 
    cout << (dp[n][0] + dp[n][1])%mod << endl;

}

int main(){
    

    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}