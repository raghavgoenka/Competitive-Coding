//https://www.codechef.com/COOK129C/problems/VACCINE3
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
     int arr[10];
   int g,p;cin>>g>>p;
  
   forf(int,i,10){cin>>arr[i];}
   ll min_d=0,max_d=0,rem=0;
   for(int i=g;i<10;i++)
   {
       rem+=arr[i];
   }
   min_d=rem/p;
   max_d=(rem/p);
   min_d = ceil((double)(rem + 1)/p); // if the first person is the chef
	    
	   max_d = ceil((double)(rem + arr[g-1])/p); //if the last person is the chef
	  
   cout<<min_d<<" "<<max_d<<endl;
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}