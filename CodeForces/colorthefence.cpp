//https://codeforces.com/problemset/problem/349/B
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
   int mn=INT_MAX;
   vi v;
   forf(int,i,9){ll num;cin>>num;v.pb(num);mn=min(mn,v[i]);}
   int p=v.size();
   if(n==0){cout<<"-1"<<endl;return;}
 int num_dig=n/mn;
 int rem=n%mn;
 if(num_dig==0){cout<<"-1"<<endl;return;}

 string res="";
   while(num_dig--)
   {
       forr(int,i,9)
       {
          if(rem+mn>=v[i])
          {
              res+=to_string(i+1);
              rem-=v[i]%mn;
              break;
          }
       }
   }

cout<<res<<endl;
   
}

int main(){
    

    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}