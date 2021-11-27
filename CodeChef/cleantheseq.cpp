//https://www.codechef.com/FZBZ21B/problems/CLESEQ
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
   ll n,m;cin>>n>>m;
  
   vl v(n);
   forf(int,i,n){cin>>v[i];}
   
   if(m==1){cout<<"0"<<endl;return;}
   mll mp1;
   int c=0;
   forf(int,i,n-1){
       if(v[i]!=v[i+1]){mp1[v[i]]++;mp1[v[i+1]]++;c++;}
   }
   mll mp;
   forf(int,i,n)
    {
        int j=i;
        while(j<n && v[i]==v[j])
        {
            j++;
        }
        if(i-1>=0 && j<n)
        {
            if(v[i-1]!=v[j])
            mp[v[i]]++;
            
        }
        i=j-1;
    }
   for(int i=1;i<=m;i++)
   {
    //    cout<<mp1[i]<<" ";
       cout<<c-mp1[i]+mp[i]<<" ";
   }
   cout<<endl;
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}