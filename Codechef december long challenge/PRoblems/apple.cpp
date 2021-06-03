//https://codeforces.com/problemset/problem/462/B
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
   ll n, k;cin>>n>>k;
   string s;cin>>s;
   ll c=0;
   transform(s.begin(), s.end(), s.begin(), ::tolower);
 
   ll arr[26]={0};
   for(auto i:s)
   {
       arr[i-'a']++;
   }
   sort(arr,arr+26);
   for(int i=25;i>=0&&k>0;i--)
   {  if(arr[i]==k){cout<<c+arr[i]*k<<endl;break;}
       if(arr[i]>k){c+=k*k;cout<<c<<endl;break;}
       else if(arr[i]<k){c+=(arr[i])*arr[i];k-=arr[i];}
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