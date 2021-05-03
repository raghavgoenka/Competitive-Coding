//https://codeforces.com/contest/1473/problem/B
#include <bits/stdc++.h>

#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define endl "\n"
#define EPS 1e-9
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forf(t,i,n) for(t i=1;i<=n;i++)
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
   string s,t; cin>>s>>t;
   if(s==t){cout<<s<<endl;return;}
   int n=s.length();
   int n1=t.length();
//    int lc1=(n*n1)/__gcd(n,n1);
//    lc1=lc1/n;
//    int lc2=(n*n1)/__gcd(n1,n);
//    lc2=lc2/n1;
   string a=s,b=t;
   int c=n,d=n1;
//    forf(int,i,lc1){a+=s;}
//    forf(int,i,lc2){b+=t;}
     while(c!=d)    
     { 
         if(c>d){b+=t;d+=n1;}
        else if(d>c){a+=s;c+=n;}
        
     }

   if(a==b){cout<<a<<endl;}
   else{cout<<"-1"<<endl;}

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