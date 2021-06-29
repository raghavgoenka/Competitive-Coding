//https://codeforces.com/contest/1207/problem/B
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
   int arr[n][m],b[n][m];
   int c=0;
   forf(int,i,n)
   {
       forf(int,j,m)
       {
           cin>>arr[i][j];
           if(arr[i][j]==0){c++;}
           b[i][j]=-1;
          
       }
   }
   if(c==(n*m)){cout<<"0"<<endl;return;}
   
  
   vp v;

   forf(int,i,n-1){
      forf(int,j,m-1){ 
      if(arr[i][j]==1 && arr[i][j+1]==1 && arr[i+1][j]==1 && arr[i+1][j+1]==1){
          
          v.pb({i+1,j+1});
        b[i][j]=1;b[i][j+1]=1;b[i+1][j]=1;b[i+1][j+1]=1;
    
      
      }
      else if(arr[i][j]*arr[i][j+1]*arr[i+1][j]*arr[i+1][j+1]==0){
            
          if(arr[i][j]==0){b[i][j]=0;}
          if(arr[i][j+1]==0){b[i][j+1]=0;}
          if(arr[i+1][j]==0){b[i+1][j]=0;}
          if(arr[i+1][j+1]==0){b[i+1][j+1]=0;}
         }
   }
   }
   forf(int,i,n)
   {
       forf(int,j,m){
         
           if(arr[i][j]!=b[i][j]){cout<<"-1"<<endl;return;}}
       
   }
   cout<<v.size()<<endl;
   for(auto i:v){cout<<i.first<<" "<<i.second<<endl;}
}

int main(){
    

    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}