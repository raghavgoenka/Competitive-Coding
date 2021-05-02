//https://www.hackerearth.com/challenges/competitive/april-circuits-21/algorithm/smallest-subaay-2-d6530e0b/
#include <bits/stdc++.h>

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

void solve(){
   int n;cin>>n;
   ll a[n],b[n];
   vl vp,v;
   forf(int,i,n){cin>>a[i];vp.pb(a[i]);}
   forf(int,i,n){cin>>b[i];}
   sort(vp.begin(),vp.end());
   int ss=vp.size(),ind;
   forf(int,i,n)
   {
       ll k=a[i];
       ll c=b[i];
       ll l=0,r=n-1;
       while (l <= r) {
        int m = l + (r - l) / 2;
  
        
        if (vp[m] == x)
            {ind=m;}
  
      
        if (vp[m] < x)
            {l = m + 1;}
  
        
        else
           { r = m - 1;}
    }
    if((ss-m)>=c){v.pb(ss);}
    else{v.pb(-1);}
    vp.erase(a[i]]);
   }
  
   

  
//    forf(int,i,n)
//    {  ll p=b[i];
//       ll c=1;
//       int j=i+1;
//        for(;j<n;j++)
//        { if(a[j]>a[i]){c++;}
//        }
//       if(c>=p){vp.pb(j);}
//       else{vp.pb(-1);}
    
//    }
// forf(ll,i,vp.size()){cout<<vp[i]<<" ";}

}
int main(){
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}