//https://codeforces.com/contest/1352/problem/B
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
   ll n,k;cin>>n>>k;
   if((n%2!=0&&k%2==0)||(k>n)){cout<<"NO"<<endl;return;}
   else if(n%k==0)
   {
       ll p=n/k;
       
       cout<<"YES"<<endl;
       while(k--){cout<<p<<" ";}
       cout<<endl;return;
   }
   else if(n%2==0&&k%2!=0&& (2*k>n)){cout<<"NO"<<endl;return;}
   else if(n%2==0&& (n>=2*k))
   {  cout<<"YES"<<endl;
       ll p=2;
       while(k>1)
       {
           cout<<p<<" ";
           k--;
           n-=p;

       }
       cout<<n<<endl;
   }
   else 
   {  cout<<"YES"<<endl;
       ll p=1;
       while(k>1)
       {
           cout<<p<<" ";
           k--;
           n-=p;
       }
       cout<<n<<endl;

   }



}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}