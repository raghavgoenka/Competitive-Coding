//https://codeforces.com/contest/1547/problem/C
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
   int k,n,m;cin>>k>>n>>m;
   vi v1(n),v2(m),res;
  
   forf(int,i,n){int p;cin>>p;v1[i]=p;}
   forf(int,i,m){int p;cin>>p;v2[i]=p;}

  int i=0,j=0;
   while(i<n||j<m){
      if(i<n&&j<m)
      {
          if(v1[i]==0){res.pb(0);i++;k++;}
          else if(v2[j]==0){res.pb(0);j++;k++;}
          else{
              if(v1[i]<=v2[j]&&v1[i]<=k){res.pb(v1[i]);i++;}
                else if(v1[i]>v2[j]&&v2[j]<=k){res.pb(v2[j]);j++;}
                else{
                    cout<<"-1"<<endl;return;
                }
          }
      }
      else if(i<n)
      {
          if(v1[i]==0){res.pb(0);i++;k++;}
          else if(v1[i]<=k){res.pb(v1[i]);i++;}
          else{cout<<"-1"<<endl;return;}
      }
      
       else if(j<m)
      {
          if(v2[j]==0){res.pb(0);j++;k++;}
          else if(v2[j]<=k){res.pb(v2[j]);j++;}
          else{cout<<"-1"<<endl;return;}
      }


   }
      
   forf(int,i,res.size()){cout<<res[i]<<" ";}
   cout<<endl;
   
   
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}