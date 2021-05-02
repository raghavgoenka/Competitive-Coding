//https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/sum-of-primes-7/
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
typedef map<long long ,long long>mll;
#define N 1000005
 bool isPrime[N];
void seive()
{
    
        for(long long int i = 0; i <=N ;++i) {
            isPrime[i] = true;
        }
        isPrime[0] = false;
        isPrime[1] = false;
        for(long long int i = 2; i * i <=N; ++i) {
             if(isPrime[i]) {
                for(long long int j = i * i; j <= N ;j += i)
                     isPrime[j] = false;
            }
        }
}
void solve(){
   ll l,r;cin>>l>>r;
   long long int count=0;
 for(long long int i=l;i<=r;i++)
 {

if(isPrime[i]==true)
{
    count+=i;
}
 }
cout<<count<<endl;
		
}

int main(){
    
 seive();
    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}