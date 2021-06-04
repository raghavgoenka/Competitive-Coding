//https://codeforces.com/contest/1108/problem/B
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
typedef map<int ,int>mll;


void solve(){
   int n;cin>>n;
   mll mp;
   int mx=0;
   forf(int,i,n){int num;cin>>num;if(num>mx){mx=num;}mp[num]++;}
   cout<<mx<<" ";
   for(auto i:mp)
   {
       if(mx%i.first==0){mp[i.first]--;}
     
   }
   mx=0;
   for(auto i:mp)
   {
     if(i.first>mx&&i.second!=0){mx=i.first;}
   }
cout<<mx<<endl;
}

int main(){
    

    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}