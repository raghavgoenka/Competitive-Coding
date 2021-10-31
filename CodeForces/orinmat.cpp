//https://codeforces.com/problemset/problem/486/B
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
   int m,n;cin>>m>>n;
   int a[m][n],b[m][n];
  memset(a, -1, sizeof(a)); 
   forf(int,i,m)
   {  
       forf(int,j,n)
       {
           cin>>b[i][j];
           if(b[i][j]==0)
           {
             for(int k=0;k<n;k++){a[i][k]=0;}
             for(int p=0;p<m;p++){a[p][j]=0;}
           }
       }
   }
//     forf(int,i,m)
//    {
//        forf(int,j,n){cout<<a[i][j]<<" ";}
//        cout<<endl;
//    }
 
   forf(int,i,m)
   {
       forf(int,j,n)
       {
          if(b[i][j]==1)
          {
              int c=0;
             for(int k=0;k<n;k++){if(a[i][k]==-1||a[i][k]==1){a[i][k]=1;c++;break;}}
            if(c==0){
             for(int p=0;p<m;p++){if(a[p][j]==-1||a[p][j]==1){a[p][j]=1;c++;break;}}
             }
             if(c==0){cout<<"NO"<<endl;return;}


          }
       }
      
   }
   cout<<"YES"<<endl;   
   forf(int,i,m)
   {
       forf(int,j,n){
           if(a[i][j]==-1){cout<<0<<" ";}
           else{cout<<a[i][j]<<" ";}
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