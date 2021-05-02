//https://codeforces.com/problemset/problem/230/B
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
#define n 1e6
bool isPrime[1000006];
void seive()
{
    for(int i = 0; i <= n;++i) {
            isPrime[i] = true;
        }
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i * i <= n; ++i) {
             if(isPrime[i] == true) {                    
                 for(int j = i * i; j <= n ;j += i)
                     isPrime[j] = false;
            }
        }
}
void solve(){
   int n1;cin>>n1;
   forf(int,i,n1)
   {
       ll k;cin>>k;
       ll in=sqrt(k);
       int nn=0;
       if(in*in==k){nn=int(in);}
       if(isPrime[nn]==true){cout<<"YES"<<endl;}
       else{cout<<"NO"<<endl;}
   }
   
}

int main(){
    
    seive();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}