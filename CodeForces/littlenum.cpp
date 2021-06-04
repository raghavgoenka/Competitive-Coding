//https://codeforces.com/contest/221/problem/B
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
#define  rn return
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
typedef map<char ,long long>mll;

void solve(){
   ll n;cin>>n;

   ll count=2;
   if(n==1){cout<<"1"; rn;}
  
   else{
     string s=to_string(n);
      mll mp;
      for(auto i:s){mp[i]++;}
      if(mp['1']>0){count=2;}else{count=1;}
        for(ll i =2;i<=sqrt(n);i++)
        {
           if(n%i==0)
           { if(n/i!=i){
               string d=to_string(i);
              
               for(auto c:d){if(mp[c]>0){count++;break;}}
                d=to_string(n/i);
                
                for(auto c:d){if(mp[c]>0){count++;break;}}
               }
               
               else{
                   string d=to_string(i);
               for(auto c:d){if(mp[c]>0){count++;break;}}
               }
           }
        }
   }
   cout<<count<<endl;
}

int main(){
    

    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}