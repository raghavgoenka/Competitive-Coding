//https://codeforces.com/contest/1203/problem/B
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
   int arr[4*n];
   mll mp;
   forf(int,i,4*n){cin>>arr[i];mp[arr[i]]++;}
   if(mp.size()==1){cout<<"YES"<<endl;return;}
   sort(arr,arr+4*n);
   int ar=arr[0]*arr[4*n-1];
   int i=0,j=4*n-1;
   while(i<j)
   {
       
       if(mp[arr[i]]>1 && mp[arr[j]]>1 && ((arr[i]*arr[j])==ar)){mp[arr[i]]-=2;mp[arr[j]]-=2;i+=2;j-=2;}
       else{ cout<<"NO"<<endl;return;}
   }
   cout<<"YES"<<endl;

}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}