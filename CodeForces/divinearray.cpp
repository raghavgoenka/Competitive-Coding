//https://codeforces.com/contest/1602/problem/B
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
typedef map<int ,long long>mll;
void solve(){
   int n;cin>>n;
  
   int arr[n];
   mll m;
   forf(int,i,n){cin>>arr[i];m[arr[i]]++;}
   
   int vl [n][n];
   int mx_count=0;
   forf(int ,i,n){vl[mx_count][i]=arr[i];}
   mx_count=1;
   while(true)
   {
      for(int i=0;i<n;i++){vl[mx_count][i]=(m[vl[mx_count-1][i]]);}
      int c=0;
      forf(int,i,n){
          if(vl[mx_count][i]==vl[mx_count-1][i]){c++;}
      }
      if(c==n){break;}
     c=0;
      m.clear();
      forf(int,i,n){m[vl[mx_count][i]]++;}
      mx_count++;


   }
   
   ll q;cin>>q;
   while(q--)
   {
       int ax,k;cin>>ax>>k;
       if(k>=mx_count){cout<<vl[mx_count][ax-1]<<endl;}
       else{cout<<vl[k][ax-1]<<endl;}
   }

}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}