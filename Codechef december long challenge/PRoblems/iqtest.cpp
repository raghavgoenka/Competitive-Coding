//https://codeforces.com/problemset/problem/287/A
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
 int b=0,w=0;
 void check(char p)
 {
    if(p=='#'){b++;}
          else{w++;}
 }
void solve(){
   char  ch[4][4];
   forf(int ,i,4)
   {
       forf(int,j,4){cin>>ch[i][j];}
   }
 
   forf(int,i,3)
   { 
      for(int j=0;j<3;j++)
      {
          char p=ch[i][j];
          check(p);
            p=ch[i][j+1];
          check(p);
            p=ch[i+1][j];
          check(p);
            p=ch[i+1][j+1];
          check(p);
         if(b>=3||w>=3){cout<<"YES"<<endl;return;}
          b=0,w=0;
      }
   }
   cout<<"NO"<<endl;
}

int main(){
    

    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}