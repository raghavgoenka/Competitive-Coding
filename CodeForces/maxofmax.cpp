//https://codeforces.com/contest/872/problem/B
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
   int n,k;cin>>n>>k;
   vll v(n);
   forf(int,i,n){ cin>>v[i];}
   if(k==1){cout<<*min_element(v.begin(),v.end())<<endl;return;}
   else if(k>2){cout<<*max_element(v.begin(),v.end())<<endl;return;}
   else if(k==2){
       vll left(n),right(n);
       ll  mn=v[0];
         forf(int,i,n){
              left[i]=min(v[i],mn);
              mn=left[i];
         }
            mn=v[n-1];
         forr(int,i,n){
              right[i]=min(v[i],mn);
              mn=right[i];
         }   
    ll res=LONG_LONG_MIN;
    F(i,1,n-1){
        res=max(res,max(left[i-1],right[i]));
    } 
    cout<<res<<endl;
   }


}

int main(){
    

    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}