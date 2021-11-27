//https://codeforces.com/contest/1610/problem/B
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
   mll mp;
   vl v(n),p,d,e;
   

   forf(int,i,n){cin>>v[i];mp[v[i]]++;}
   

   if(mp.size()==1||mp.size()==2){cout<<"YES"<<endl;return;}
   if(mp.size()==n){cout<<"NO"<<endl;return;}
   
   int  i=0,j=n-1,a=-1,b=-1;
   while(i<=j)
   {    
   if(v[i]!=v[j])
       {
          a=v[i],b=v[j];
          break;
       }
       i++;j--;
   }
   if(a==-1&&b==-1){cout<<"YES"<<endl;return;}

forf(int,i,n){
    if(v[i]!=a){d.pb(v[i]);}
    if(v[i]!=b){e.pb(v[i]);}
}
p=d,v=e;
reverse(all(d));reverse(all(e));

if(d==p){cout<<"YES"<<endl;return;}
else if(e==v){cout<<"YES"<<endl;return;}
else{cout<<"NO"<<endl;}



  
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}