//https://codeforces.com/contest/1231/problem/C
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
   int n,m;cin>>n>>m;
   int arr[n][m];
   ll sum=0;
   forf(int,i,n){
       forf(int,j,m)
       {
           cin>>arr[i][j];
           sum+=arr[i][j];
       }
   }
   forf(int,i,n)
   {
       mll mp;
       ll p=8001;
      int mx=INT_MIN,mx2,flag=0;
       for(int j=m-1;j>=0;j--)
       {   
           if(arr[i][j]!=0){mp[arr[i][j]]++;p=arr[i][j];}
           else 
           {
               arr[i][j]=p-1;
               sum+=arr[i][j];
               p=arr[i][j];
               mp[arr[i][j]]++;
           }
         mx2=arr[i][j];
         if(flag==0) {mx=max(mx,arr[i][j]);flag=1;}
          if(mx2>mx){cout<<"-1"<<endl;return;}
         
          if(mp[arr[i][j]]>1){cout<<"-1"<<endl;return;} 
       }
   }
   cout<<sum<<endl;
    forf(int,i,n){
       forf(int,j,m)
       {
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }
}

int main(){
    

    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}