//https://codeforces.com/contest/1606/problem/A
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
   string s;cin>>s;
   int n=s.size();
   int c1=0,c2=0;
   forf(int,i,n-1)
   {
       if(s[i]=='a'&&s[i+1]=='b'){c1++;}
       else if(s[i]=='b'&&s[i+1]=='a'){c2++;}
   }
   if(c1==c2){cout<<s<<endl;return;}
   if(c1!=c2)
   {
       string c="";
       if(c1>c2){
           if(s[0]=='a'){s[0]='b';}
       }
       else{if(s[0]=='b'){s[0]='a';}}

   }
  cout<<s<<endl;
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}