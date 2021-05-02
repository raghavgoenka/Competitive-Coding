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
   ll n,q;cin>>n>>q;
   int arr[n];
   
   ll count_one=0;
   forf(int,i,n){cin>>arr[i]; if(arr[i]==1){count_one++;}}
   while(q--)
   { 
       int type ,k;cin>>type>>k;
       if(type==1)
       { 
        arr[k-1]=1-arr[k-1];
        if(arr[k-1]==0){count_one--;}
        else{count_one++;}
        }
       else{
           if(k>count_one){cout<<"0"<<"\n";}
           else{cout<<"1\n";}}
   }
return ;
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