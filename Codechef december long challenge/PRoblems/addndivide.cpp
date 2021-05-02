//https://codeforces.com/problemset/problem/1485/A
#include <bits/stdc++.h>
#include<iostream>
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
    ll a,b;
    cin>>a>>b;
   
    if(b>a){cout<<"1\n";return;}
    if(a==b){cout<<"2\n";return;}
  
    ll res=INT64_MAX,count=0;
    // till sqyare of a number bcoz after that either we will need 
    
     for(ll i=0;i*i<=a;i++)
     {
         if(b==1 && i==0){continue;}
       count=i;
         ll num=a;
         while(num)
         {
             num=num/(b+i);
            count++;
         }
         res=min(res,count);
     }
     cout<<res<<endl;
    return;
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