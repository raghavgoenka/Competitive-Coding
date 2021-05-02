// /https://www.codechef.com/START3B/problems/HIRETEST
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

void solve(){
   int n,m,x,y;cin>>n>>m>>x>>y;
   int pass=0,partial=0;

   string c="";
   while(n--)
   {  pass=0,partial=0;
       string s;cin>>s;
     
       int len=s.size();
       forf(int,i,len)
       {
           if(s[i]=='F'){pass++;}
           else if(s[i]=='P'){partial++;}
       }
       if(pass>=x){c+="1";}
       else if(pass>=(x-1)&& partial>=y){c+="1";}
       else {c+="0";}
   }
   cout<<c<<endl;
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}