//https://codeforces.com/contest/1324/problem/B
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
   int arr[n];
 
   forf(int ,i,n){cin>>arr[i];}
   int d=0;
   if(n==3){if(arr[0]==arr[2]){cout<<"YES"<<endl;return;}}
   forf(int,i,n-2)
   {
       int num=arr[i];
       int c=0;
       d=1;
       for(int j=i+1;j<n;j++)
       {      if(c==0){
              if(arr[j]!=num){c++;}
              else{d++; }
             }
              else if (arr[j]==num){cout<<"YES"<<endl;return;}
             if(d>=3){cout<<"YES"<<endl;return;}  
       }
   }
   cout<<"NO"<<endl;
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