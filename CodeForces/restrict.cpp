//https://codeforces.com/contest/1245/problem/B
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
typedef map<char ,long long>mll;
void solve(){
   int n;cin>>n;
  
   int a,b,c;cin>>a>>b>>c;
  
   int res=ceil(n/2.0);
   int r=0,p=0,s=0;
   string ss;cin>>ss;
   forf(int,i,n){if(ss[i]=='R'){r++;}else if(ss[i]=='P'){p++;}else{s++;}}
   int count=0;
   count=min(b,r)+min(p,c)+min(a,s);
   
   if(count<res){cout<<"NO"<<endl;return;}
   string z;
   forf(int,i,n){z+='0';}
    
   forf(int,i,n)
   {
          if(ss[i]=='R'&&b>0){z[i]='P';b--;}
          else if(ss[i]=='P'&&c>0){z[i]='S';c--;}
          else if(ss[i]=='S'&&a>0){z[i]='R';a--;}
   }
 
   forf(int,i,n)
   {
       if(z[i]=='0'&&b>0){z[i]='P';b--;}
       else if(z[i]=='0'&&c>0){z[i]='S';c--;}
       else if(z[i]=='0'&&a>0){z[i]='R';a--;}
   }
   cout<<"YES"<<endl<<z<<endl;
   
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}