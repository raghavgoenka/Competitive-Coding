//https://www.codechef.com/APRIL21C/problems/KAVGMAT
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

void solve(){
   ll n,m, k;
   cin>>n>>m>>k;
   ll arr[n][m];

   ll aux[n][m]={0};
   ll count=0;
   forf(ll,i,n)
   { 
       forf(ll,j,m){cin>>arr[i][j];if(arr[i][j]>=k){count++;}}

   }
   
   for (ll i=0; i<m; i++)
     { aux[0][i] = arr[0][i];}
  
   
   for (ll i=1; i<n; i++)
      {for (ll j=0; j<m; j++)
        { aux[i][j] = arr[i][j] + aux[i-1][j];}
      }
   
   for (ll i=0; i<n; i++)
     { for (ll j=1; j<m; j++)
        { aux[i][j] += aux[i][j-1];}
     } 
 
   ll mx=min(n,m);
   ll iw=2;
   
   while(iw<=mx)
   {
       for (ll i=0; i<n-iw+1; i++)
   {
     
      for (ll j=0; j<m-iw+1; j++)
      {
         ll tli=i,tlj=j,rbi=i+iw-1,rbj=j+iw-1;
  
         ll res = aux[rbi][rbj];
    
   
    if (tli > 0)
      { res = res - aux[tli-1][rbj];}
  
  
    if (tlj > 0)
      { res = res - aux[rbi][tlj-1];}
  
   
    if (tli > 0 && tlj > 0)
       {res = res + aux[tli-1][tlj-1];}
           ll po=iw*iw;
     if((double(res)/double(po))>=k)  { count++;}      
          
      }
 }
   iw++;
   }
cout<<count<<endl;;

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