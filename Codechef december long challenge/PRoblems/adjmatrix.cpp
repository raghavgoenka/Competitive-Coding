//https://codeforces.com/contest/1520/problem/C
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
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
typedef unordered_map<long long, long long> umll;
typedef map<long long ,long long>mll;
void solve(){
   int n;cin>>n;
   if(n==1){cout<<"1"<<endl;return;}
   if(n==2){cout<<"-1"<<endl;return;}
   
  int p=1,p1=9;
  int a[n][n];
  if(n==3)
  {
     cout<<"2 9 7\n";
        cout << "4 6 3\n";
        cout << "1 8 5\n";
        return;
  }
  for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j+=2)
       {
          a[i][j]=p;
          p++;
       }
        
   }
    for(int i=0;i<n;i++)
   {
      for(int j=1;j<n;j+=2)
       {
          a[i][j]=p;
          p++;
       }
        
   }
   forf(int,i,n)
   {
       forf(int,j,n)
       {
           cout<<a[i][j]<<" ";
       }
       cout<<endl;
   }
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}