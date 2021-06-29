//https://codeforces.com/contest/1213/problem/C
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
   ll n,m;cin>>n>>m;
   ll sum=0;
   for(int i=1;i<11;i++)
   {
      sum+=(i*m)%10;   // calculating sum of last digit from 1 to 10 divisors of m
   }
   ll res;
   ll num_div=n/m;  //num of divisors
   ll quo=num_div/10; 
   res=sum*quo;
   ll rem=num_div%10; 
   for(int i=1;i<=rem;i++)
   {
      res+=(i*m)%10;  // counting sum of last dig of remaining divisors
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