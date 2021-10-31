//https://codeforces.com/contest/550/problem/B
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
   int n,l,r,x;
   cin>>n>>l>>r>>x;
   int arr[n];
   forf(int,i,n){cin>>arr[i];}
   sort(arr,arr+n);
   int res=0;
  for(int i=0;i<(1<<n);i++)
  { 
    int flag=0,ff=0,ll=0,c=0,sum=0;
      for(int j=0;j<n;j++)
     {

         if(i&(1<<j))
         {
             c++;
          sum+=arr[j];
          ll=arr[j];
          if(flag==0){ff=arr[j];flag=1;}
         }
      
     }
    
         if(c>=2)
     {
         
         if(sum>=l&&sum<=r&&(ll-ff)>=x){res++;}
     }
    

  }
  cout<<res<<endl;
}

int main(){
    

    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}