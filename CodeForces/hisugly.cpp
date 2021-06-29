//https://codeforces.com/contest/1534/problem/B
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
   vll arr;
   arr.pb(0);
   forf(int,i,n){ll nn;cin>>nn;arr.pb(nn);}
   arr.pb(0);
   ll cnt=0;
   int ss=arr.size();
   for(int i=1;i<ss-1;i++)
   {
         if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1]))
         { 
            ll p=max(arr[i-1],arr[i+1]);
           cnt+=arr[i]-p;
           arr[i]=p;
         }
   }
  
   forf(int ,i,ss-1){cnt+=abs(arr[i]-arr[i+1]);}
   cout<<cnt<<endl;
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}