//https://codeforces.com/problemset/problem/1513/A
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
   int n,k;cin>>n>>k;
  
   if(k==0){forf(int,i,n){cout<<i+1<<" ";}cout<<endl;return;}
   if(2*k>=n){cout<<"-1"<<endl;return;}
   else
   { k+=1;

       int i=1,j=n,flag=0;;
       forf(int,p,n)
       { if(k<=0){if(p+1<=n){flag=1;}break;}
           if(p%2==0){cout<<i<<" ";i++;k--;}
            if(p%2!=0){cout<<j<<" ";j--;}

           
       }
       if(flag==1)
       {  
           for(int a=i;a<=j;a++){cout<<a<<" ";}
       }
       cout<<endl;
   }
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