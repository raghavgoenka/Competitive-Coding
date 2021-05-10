//https://www.codechef.com/MAY21B/problems/MODEQ
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
typedef vector<pair<int,int>>vp;
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
typedef unordered_map<long long, long long> umll;
typedef map<long long ,long long>mll;
void solve(){
   ll n ,m;cin>>n>>m;
   ll c=n-1;
   if(m==1){ll p=n-2;c+=(p*(p+1))/2;cout<<c<<endl;return;}
 
     for(ll i=2;i<n;i++)
   {  
        if(m<i&&m<n){c+=n-i;continue;}
       else  if(m==i&&m<n){c+=n-i;continue;}
        else if(i<m&&n==m){continue;}
      else
      {
          for(ll j=i+1;j<=n;j++)
      {
           if((m%i)%j==(m%j)%i){c++;}
      }
          
      }
   }
   cout<<c<<endl;
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}