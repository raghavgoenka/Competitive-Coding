//https://codeforces.com/contest/342/problem/A
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
   mll mp;
   forf(int,i,n){int num;cin>>num;mp[num]++;}
   int p=mp[1];
  
 int c=0;
 if(mp[1]==0){cout<<"-1"<<endl;return;}
 if(mp[1]!=(n/3)){cout<<"-1"<<endl;return;}
 if(mp[3]>mp[6]){cout<<"-1"<<endl;return;}
 if((mp[2]+mp[3])!=n/3){cout<<"-1"<<endl;return;}
if(mp[4]+mp[6] != (n/3)){cout<<"-1"<<endl;return;}

 while(mp[1]>0&&mp[2]>0&&mp[4]>0){
  if(mp[1]>0&&mp[2]>0&&mp[4]>0){cout<<"1 2 4"<<endl;mp[1]--;mp[2]--;mp[4]--;c=1;}}
  while(mp[1]>0&&mp[2]>0&&mp[6]>0){
  if(mp[1]>0&&mp[2]>0&&mp[6]>0){cout<<"1 2 6"<<endl;mp[1]--;mp[2]--;mp[6]--;c=1;}}
while(mp[1]>0&&mp[3]>0&&mp[6]>0){
  if(mp[1]>0&&mp[3]>0&&mp[6]>0){cout<<"1 3 6"<<endl;mp[1]--;mp[3]--;mp[6]--;c=1;}}

  if(c==0){cout<<"-1"<<endl;return;}
  
 
  }

int main(){
    

    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}