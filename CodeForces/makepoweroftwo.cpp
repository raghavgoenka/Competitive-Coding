//https://codeforces.com/contest/1560/problem/D
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

vll power;
void solve(){
   ll n;cin>>n;
   if(n&(n-1)==0){cout<<0<<endl;return;}
   
   string check=to_string(n);
   int res=INT_MAX;
   int len=check.length();
   string final="";
   for(int i=0;i<power.size();i++){
      int equal=0,a=0,b=0;
      string temp=to_string(power[i]);
      while(a<len && b<temp.length()){
      if(check[a]==temp[b])
      {
         equal++;a++;b++;
      }
      else{
          a++;
      }
      }
      int c=len+temp.length()-2*equal;
     
      if(c<=res){res=c;final=temp;}


   }

   cout<<res<<endl;
}

int main(){
    

    flash;

    ll t; cin >> t;
    power.pb(1);

    for(ll i=1;i<=60;i++)
    {
        ll p=2*power[i-1];
       
        power.pb((p));
    }
    while(t--){
        solve();
    }
    
    return 0;
}