//https://codeforces.com/contest/1462/problem/D
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
   int n; cin >> n;
  int arr[n];
  ll sum=0;
  forf(int,i,n){cin>>arr[i];sum+=arr[i];}
  vi pos;
  for(int i=n;i>=1;i--){if(sum%i==0){pos.pb(i);}}

  for(int i=0;i<pos.size();i++){

      ll reqsum=sum/pos[i];
      ll curr=0;
      int c=1;
      for(int j=0;j<n;j++){
          curr+=arr[j];
          if(curr>reqsum){c=0;break;}
         if(curr==reqsum){curr=0;}

      }
      if(c==1){cout<<n-pos[i]<<endl;return;}
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