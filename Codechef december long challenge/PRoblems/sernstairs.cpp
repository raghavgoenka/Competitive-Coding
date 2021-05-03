//https://codeforces.com/problemset/problem/381/B
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
typedef map<int, int> mll;

void solve(){
   int n;cin>>n;
   int arr[n],b[n]={0};
   mll mp;
   forf(int,i,n){cin>>arr[i];mp[arr[i]]++;}
   sort(arr,arr+n);
   int max=arr[n-1];
   int i=0,j=n-1,count=0;
   for(auto in:mp)
   {
      if(in.second>=2 && in.first!=max){b[i]=in.first;b[j]=in.first;i++;j--;count+=2;}
      else {b[j]=in.first;j--;count+=1;}


   }
   cout<<count<<endl;
   forf(int,i,n){if(b[i]>0){cout<<b[i]<<" ";}}
   
}

int main(){
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}