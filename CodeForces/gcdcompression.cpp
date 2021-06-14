//https://codeforces.com/contest/1370/problem/B
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
   vi e,o;
   forf(int,i,2*n){int p;cin>>p;
    if(p%2==0){e.pb(i+1);}
    else{o.pb(i+1);}
   }
   if(e.size()>0&&o.size()>0){
       int c=n-1;
       int a=o.size();
       int b=e.size();
       if(a%2!=0){a--;}
       if(b%2!=0){b--;}
       for(int i=0;i<a;i+=2)
       {
           cout<<o[i]<<" "<<o[i+1]<<endl;
           c--;
       }
       for(int i=0;i<b&&c>0;i+=2)
       {
           cout<<e[i]<<" "<<e[i+1]<<endl;
           c--;
       }
       return;
   }
   else if(e.size()==0)
   {  int c=n-1;
       for(int i=0;i<o.size()&&c>0;i+=2)
       {cout<<o[i]<<" "<<o[i+1]<<endl;
         c--;
       }
       return;
   }
    else if(o.size()==0)
   {   int c=n-1;
       for(int i=0;i<e.size()&&c>0;i+=2)
       {cout<<e[i]<<" "<<e[i+1]<<endl;c--;}
       return;
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