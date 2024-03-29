//https://codeforces.com/contest/1566/problem/D1
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
   int n,m,k;cin>>n>>m>>k;
   int count=0,c1=0;
   char c[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++){cin>>c[i][j];if(c[i][j]=='.'){c1++;}}
   }
   if(k==1){cout<<c1<<endl;return;}
   for(int i=0;i<n;i++)
   {int k1=0;
   int in=0;
      for(int j=0;j<m;j++)
      {
          if(c[i][j]=='.'){k1++;if(k1==k){count++;k1--;}}
          else if(c[i][j]=='*'){k1=0;}
      }
   }
 
   for(int i=0;i<m;i++)
   {int k1=0;
   int in=0;
      for(int j=0;j<n;j++)
      {
          if(c[j][i]=='.'){k1++;if(k1==k){count++;k1--;}}
          else if(c[j][i]=='*'){k1=0;}
      }
   }
cout<<count<<endl;
}

int main(){
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}