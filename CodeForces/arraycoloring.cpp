//https://codeforces.com/problemset/problem/1102/B
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
typedef vector<pair<int,int>> vpp;
void solve(){
   int n,k;cin>>n>>k;
  vpp p1;
  vpp p2;
  int arr[5001]={0};
   forf(int,i,n)
   {
      int m;cin>>m;p1.pb({m,i});
      arr[m]++;
      if(arr[m]>k){cout<<"NO"<<endl;return;}
   }
   cout<<"YES"<<endl;
   int p=1;
   sort(p1.begin(),p1.end());
   for(auto i:p1)
   {
       p2.pb({i.second,p});
       if(p==k){p=0;}
       p++;
      

   }
   sort(p2.begin(),p2.end());
  forf(int,i,p2.size()){cout<<p2[i].second<<" ";}

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