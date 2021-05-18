//https://www.hackerearth.com/challenges/competitive/may-circuits-21/algorithm/natural-xor-25d22168/
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
typedef vector<pair<int,int>>vp;
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
typedef unordered_map<long long, long long> umll;
typedef map<long long ,long long>mll;
void solve(){
   ll n;cin>>n;
   ll p=4;
   if(n%p==3){cout<<"0"<<endl;return;}
   if(n==1){cout<<"1 1"<<endl;return;}
   if(n==2){cout<<"2 2 1"<<endl;return;}

   ll rem=n%p;
   if(rem==1){cout<<"1 1"<<endl;return;}
   if(rem==2){cout<<"2 "<<n<<" "<<"1"<<endl;return;}
   rem++;
   cout<<rem<<" ";
   while(rem--)
   {
       cout<<n<<" ";
       n--;
   }
   cout<<endl;
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}