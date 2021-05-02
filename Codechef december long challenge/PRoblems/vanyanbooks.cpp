//https://codeforces.com/problemset/problem/552/B
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
ll arr[]={0,9,99,999,9999,99999,999999,9999999,99999999,999999999};
void solve(){
   ll n,count=9;cin>>n;
   if(n<10){cout<<n<<endl;return;}
   string s=to_string(n);
   ll len=s.length();
   while(len>1){
   count+=((n-arr[len-1])*len);
 
   n=n-(n-arr[len-1]);
   s=to_string(n);
   len=s.length();
   }
   cout<<count<<endl;
}

int main(){
    

    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}