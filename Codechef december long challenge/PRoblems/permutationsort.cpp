//https://codeforces.com/contest/1525/problem/B
#include <bits/stdc++.h>
#define flash ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define endl "\n"
#define EPS 1e-9
#define re return
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
   int c=0;
   int arr[n];forf(int,i,n){cin>>arr[i];if(arr[i]!=i+1){c++;}}
  
   if(c==0){cout<<"0"<<endl;re;}
   if(arr[0]==1||arr[n-1]==n){cout<<"1"<<endl;re;}
   
   if(arr[0]==n&&arr[n-1]==1){cout<<"3"<<endl;re;}
   if(arr[0]==n&&arr[n-1]!=1){cout<<"2"<<endl;re;}
   if(arr[0]==2&&arr[1]==1&&c==2){cout<<"1"<<endl; re;}
   if(arr[0]<n){cout<<"2"<<endl;re;}
  
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}