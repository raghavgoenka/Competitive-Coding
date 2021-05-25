//https://codeforces.com/problemset/problem/144/A
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
   int n;cin>>n;
   int arr[n];
   int max=0,min=10000,min_ind=0,max_ind=0;
   forf(int,i,n){
    cin>>arr[i];
    if(arr[i]<=min){min=arr[i];min_ind=i;}
    if(arr[i]>max){max=arr[i];max_ind=i;}
    }
   
  if(min_ind==n-1&&max_ind==0||max_ind==min_ind){cout<<"0"<<endl;return;}
  if(min_ind<max_ind){cout<<n-1-min_ind+max_ind-1<<endl;return;}
  cout<<max_ind+((n-1)-min_ind)<<endl;

}

int main(){
    

    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}