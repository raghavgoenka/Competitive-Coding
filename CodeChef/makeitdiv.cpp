//https://www.codechef.com/COOK135B/problems/ALLDIV3
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
   vl v(n),a,b;
   ll c=0,d=0,e=0;
   forf(int,i,n){cin>>v[i];
   if(v[i]%3==0){c++;}
   else if(v[i]%3==1){d++;a.pb(v[i]);}
   else if(v[i]%3==2){e++;b.pb(v[i]);}
   }
 

  if(c==n){cout<<"0"<<endl;return;}
  else if(d==e){cout<<d<<endl;return;}
  else if(d!=e&&c>0){cout<<}
  else if(d!=e){cout<<"-1"<<endl;return;}


}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}