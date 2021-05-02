//https://codeforces.com/problemset/problem/1025/B
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
set<ll>st;
void primefactor(ll a)
{
    for(int i=2;i*i<=a;i++)
    {
        if(a%i==0)
        {
            st.insert(i);
            while(a%i==0){a=a/i;}
        }
    }
    if(a>1){st.insert(a);}
}
void solve(){
   ll n;cin>>n;
   ll a[n],b[n];

   forf(ll,i,n){cin>>a[i]>>b[i];}
   primefactor(a[0]);
   primefactor(b[0]);
   int c=1;
   for(auto p:st)
   { c=1;
       for(ll i=1;i<n;i++)
       {   
          
            if(a[i]%p!=0 && b[i]%p!=0){c=0;break;}
           
       }
        if(c==1){cout<<p<<endl;return;}
        
   }
if(c==0){cout<<"-1"<<endl;return;}
  
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