//https://www.codechef.com/APRIL21C/problems/CHAOSEMP
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

void solve(ll t,ll q,ll d){
   ll x=-2e18,y=2e18,x1=y,y1=x;
   ll c=1;
   string s;
   while(x<=y)
   {
       ll mid=(x+y)/2;
       if(c==1ll)
       {
           cout<<c<<" "<<mid<<" "<<y1<<endl;
       }
       else{
           cout<<c<<" "<<mid<<" "<<y1<<" "<<mid<<" "<<x1<<endl; 
       }
       cin>>s;
       if(s[0]=='O'){return;}
       if(s[0]=='X'){c=2ll;}
       if(s[0]=='P'){x=mid+1ll;}
       if(s[0]=='N'){y=mid-1ll;}
   }
}

int main(){
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t,q,d;cin>>t>>q>>d;
    while(t--){
        solve(t,q,d);
    }
    
    return 0;
}