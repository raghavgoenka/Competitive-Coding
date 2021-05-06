//https://codeforces.com/contest/1490/problem/B
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
typedef map<long long ,long long>mll;
void solve(){
   int n;cin>>n;
   int c0=0,c1=0,c2=0;
   forf(int,i,n){int num;cin>>num;if(num%3==0){c0++;} else if(num%3==1){c1++;} else{c2++;}}
 
   if(c0==c1&&c1==c2){cout<<"0"<<endl;return;}
   int req=n/3,c=0;

  while(c0!=c1||c1!=c2){
     
   if(c2>req){c0+=c2-req;c+=c2-req;c2=req;}
   if(c0>req){c1+=c0-req;c+=c0-req;c0=req;}
   if(c1>req){c2+=c1-req;c+=c1-req;c1=req;}
  }

   
   if(c0==c1&&c1==c2){cout<<c<<endl;}
   
   
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}