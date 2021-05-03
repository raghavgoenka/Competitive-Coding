//https://codeforces.com/problemset/problem/1512/B
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

void solve(){
   int n;cin>>n;
   char arr[n][n];
   int row[2],col[2];
   int p=0;
   forf(int,i,n)
   {
       forf(int,j,n)
       {
           cin>>arr[i][j];
           if(arr[i][j]=='*'){row[p]=i;col[p]=j;p++;}
       }
   }

   if(row[0]==row[1])
   {   if(row[0]<(n-1)){
       arr[row[0]+1][col[0]]='*';
       arr[row[0]+1][col[1]]='*';
   }
   else{
       arr[row[0]-1][col[0]]='*';
       arr[row[0]-1][col[1]]='*';
   }
   }
   else if(col[0]==col[1])
   {  if(col[0]<(n-1)){
       arr[row[0]][col[0]+1]='*';
       arr[row[1]][col[0]+1]='*';
      }
      else{
          arr[row[0]][col[0]-1]='*';
       arr[row[1]][col[0]-1]='*';
      }

   }
   else
   { 
       arr[row[0]][col[1]]='*';
       arr[row[1]][col[0]]='*';
   }
   forf(int,i,n)
   {
       forf(int,j,n)
       {
           cout<<arr[i][j];
       }
       cout<<endl;
   }
  
}

int main(){
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}