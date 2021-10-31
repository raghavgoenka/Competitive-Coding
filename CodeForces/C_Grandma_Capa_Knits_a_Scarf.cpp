// /https://codeforces.com/contest/1582/problem/C
#include <bits/stdc++.h>
#define flash ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define pb push_back
#define eb emplace_back
#define ff first
#define ss1 second
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
   int n ;cin>>n;
   string s,rev,temp;cin>>s;
  temp=s;
   rev=s;
   reverse(s.begin(),s.end());
   

   if(rev==s){cout<<"0"<<endl;return;}
   int mn=INT_MAX;
   
  mll mp;
  forf(int,i,n){mp[s[i]]++;}
  
  for(auto in:mp){

    char p=in.first;
   
    s=temp;
    int i=0,j=s.length()-1;
    int c=0;
    while(i<=j){
     
    
      if(s[i]==s[j]){i++;j--;continue;}
     
      else if(s[i]==p){i++;c++;}
      else if(s[j]==p){j--;c++;}
      else{c=INT_MAX;break;}
    }
   mn=min(mn,c);
  }
  if(mn==INT_MAX){cout<<"-1"<<endl;return;}
   cout<<mn<<endl; 
    
}

int main(){
    
    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}