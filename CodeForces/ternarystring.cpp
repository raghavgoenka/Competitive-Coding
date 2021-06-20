//https://codeforces.com/contest/1354/problem/B
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
   string s;cin>>s;
   int one=-1,two=-1,three=-1;
   int res=INT_MAX;
   forf(int,i,s.length())
   {
         if(s[i]=='1'){one=i;}
         else if(s[i]=='2'){two=i;}
         else if(s[i]=='3'){three=i;}

    if(one>-1&&two>-1&&three>-1)
       {
           int p=max(abs(three-one),max(abs(two-one),abs(two-three)));
         
            res=min(p,res);
           
       }
   }
   if(res==INT_MAX){cout<<"0"<<endl;}
   else{cout<<res+1<<endl;}
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}