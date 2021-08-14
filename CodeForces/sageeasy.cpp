//https://codeforces.com/contest/1419/problem/D1
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
   ll arr[n];
   forf(int, i,n){cin>>arr[i];}
   sort(arr,arr+n);
   if(n==1||n==2)
   {
       cout<<"0"<<endl;
       forf(int,i,n){cout<<arr[i]<<" ";}
       return;
   }
   int tot=n/2;
   if(n%2==0){tot--;}
   int i=0,j=n-1;
   cout<<tot<<endl;
   while(i<=j)
   {
       if(i==j){cout<<arr[i]<<endl;i++;j--;continue;}
       cout<<arr[j]<<" "<<arr[i]<<" ";
       i++;j--;
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