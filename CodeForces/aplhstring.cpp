//https://codeforces.com/contest/1547/problem/B
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
   string s;cin>>s;
   mll mp,mp1;
   int n=s.size();
   forf(int,i,n){mp[s[i]]=i;mp1[s[i]]++;}
   int left=mp['a'],right=mp['a'];
   if(n==1&&s=="a"){cout<<"YES"<<endl;return;}
   else if(n==1&&s!="a"){cout<<"NO"<<endl;return;}
   if(mp1['a']==0){cout<<"NO"<<endl;return;}
  for(int i=1;i<n;i++)
  {
      char p=char(i+'a');
   
       if(mp1[p]>1||mp1[p]==0){cout<<"NO"<<endl;return;}
        
        if(mp[p]==left-1){left=mp[p];}
        else if(mp[p]==right+1){right=mp[p];}
        else if(abs(mp[p]-left)>1||abs(mp[p]-right)>1){cout<<"NO"<<endl;return;}
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