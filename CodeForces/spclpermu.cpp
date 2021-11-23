//https://codeforces.com/contest/1612/problem/B
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
   int n,a,b;cin>>n>>a>>b;
   int arr[n];
   mll mp;
   int t=n/2;
   arr[t-1]=a;
   arr[t]=b;
   mp[a]++;mp[b]++;
   int j=n;
   int mx=b,mn=a;
   for(int i=0;i<t-1;i++)
   {    
       if(mp[j]!=0){j--;i--;continue;}
      if(mp[j]==0){arr[i]=j;mp[j]++;}
      if(min(arr[i],a)<a){cout<<"-1"<<endl;return;}
      j--;
   }
   int p=1;
   for(int i=t+1;i<n;i++)
   { if(mp[p]!=0){p++;i--;continue;}
       if(mp[p]==0)
       {
           arr[i]=p;
           mp[p]++;
       }
       if(max(arr[i],b)>b){cout<<"-1"<<endl;return;}
       p++;
   }
   forf(int,i,n){cout<<arr[i]<<" ";}
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