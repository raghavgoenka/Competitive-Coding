//https://codeforces.com/contest/1333/problem/B
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
   ll a[n],b[n];
   forf(int,i,n){cin>>a[i];}
   forf(int,i,n){cin>>b[i];}
   if(a[0]!=b[0]){cout<<"NO"<<endl;return;}
   ll mx=a[0],mn=a[0];
   for(int i=1;i<n;i++)
   {
       if(a[i]==b[i]){mx=max(mx,a[i]);mn=min(mn,a[i]);continue;}
       else if(a[i]<b[i]){
           
           if(mx!=1){cout<<"NO"<<endl;return;}
           

       }
       else if(a[i]>b[i]){
          
           if(mn!=-1){cout<<"NO"<<endl;return;}
       }
       mx=max(mx,a[i]);mn=min(mn,a[i]);
   }
   cout<<"YES"<<endl;
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}