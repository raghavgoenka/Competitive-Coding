//https://codeforces.com/contest/1304/problem/B
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
typedef map<string ,long long>mll;
void solve(){
   int n,m;cin>>n>>m;

  string start="",end="",mid="";
   int a=0,j=n-1;
   mll mp;
   while(n--)
   {
       string s;cin>>s;
       mp[s]++;
   }
  
   for(auto i:mp)
   { if(i.second==0){continue;}
      string pal=i.first;
      string pl=i.first;
    
      reverse(pal.begin(),pal.end());
       mp[pl]--;
      if(mp[pal]>0)
      { 
          int c=min(i.second,mp[pal]);
         
          for(int p=0;p<c;p++)
          {
              start+=pl;end=pal+end;
          }
         mp.erase(pal);
      }
      else{
          if(pl==pal&&mid.length()==0){mid+=pl;}
      }
   

   }
   string ans=start+mid+end;

   cout<<ans.length()<<endl<<start+mid+end;
   cout<<endl;
}

int main(){
    

    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}