//https://www.codechef.com/FZBZ21B/problems/SUBMIMX
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
   if(n==m){cout<<0<<endl;return;}
   if(m==0){ll p=n*(n+1)/2;cout<<p<<endl;return;}

   int mid=n/2;
   if(m==1){
       ll p=mid*(mid+1)/2;
       ll d=(mid-1)*mid/2;
       if(n%2!=0){cout<<2*p<<endl;return;}
       else{cout<<p+d<<endl;return;}
   }
   if(m>=mid){cout<<n-m<<endl;return;}
   int l=n-m;
   int rm=m+1;
   int p=l/rm;
   int rem=l%rm;

   

   ll res=rem*(p+1)*(p+2)/2+(rm-rem)*(p)*(p+1)/2;

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