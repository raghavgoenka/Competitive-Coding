//https://www.codechef.com/APRIL21C/problems/SDICE
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
umll mp;
void dice()
{
    ll n=1000000;
mp[0]=0; mp[1]=20;mp[2]=36;mp[3]=51;mp[4]=60;
 for(ll i=5;i<=n;i++)
 {   ll rem=i%4;
     ll quo=i/4;
     if(rem!=0){
    mp[i]=mp[quo*4]-(4*rem)+mp[rem];}
    else
    {
        mp[i]=mp[4]*quo-(4*(i-4));
    }
 }
 
}
void solve(){
   ll n1;cin>>n1;
   if(n1<=10){cout<<mp[n1]<<endl;return;}
   ll quo=n1/4;
   int rem=n1%4;
  
   
   ll sum=mp[4]*(quo)+mp[rem]-4*((quo-1)*4 +rem);
   cout<<sum<<endl;

   
}

int main(){
    
    dice();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}