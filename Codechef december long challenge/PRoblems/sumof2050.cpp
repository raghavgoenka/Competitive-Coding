//https://codeforces.com/problemset/problem/1517/A
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
   ll n;cin>>n;
   if(n<2050){cout<<"-1"<<endl;return;}
   ll num=2050,c=0;
 if(n%num==0){
 ll quo=n/num;
 if(quo<10){cout<<quo<<endl;return;}
string s=to_string(quo);
int len=s.length();
   while(quo>=10)
   {
       ll pp=quo/pow(10,len-1);
       c+=pp;
       quo=quo-(pow(10,len-1)*pp);
       s=to_string(quo);
       len=s.length();
   }
   cout<<c+quo<<endl;return;
  }
 else{cout<<"-1"<<endl;}
  
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}