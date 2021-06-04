//https://codeforces.com/problemset/problem/770/B
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
   ll n;cin>>n;
   ll res=n;
   if(n<10){cout<<n;return;}
   
  
   string p=to_string(n);
   
   ll len=p.length();
   int sum=0,countt=0;
   forf(int,i,len){sum+=p[i]-'0';}
   string s="";
   int c=0;
   

  if(p[1]!='9'){

      forf(int,i,len){
         if(i==0){int nn=p[i]-'0';nn-=1;{p[i]=nn+'0';}}
       else{p[i]='9';};   
      }
  }
 else{
   
     int k=1;
     for(int i=2;i<len;i++)
     {
      if(p[i]=='9'){k++;}
      else{p[k]='8';break;}
     }
     
     for(int i=len;i>k;i--){p[i]='9';}
 }
 forf(int,i,p.length()){countt+=p[i]-'0';}
 if(sum==countt){cout<<n;return;}
 if(p[0]=='0'){
 for(int i=1;i<p.length();i++){{cout<<p[i];}}}
 else {cout<<p;}
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