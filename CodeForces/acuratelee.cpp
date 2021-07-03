//https://codeforces.com/contest/1369/problem/B
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
   int n;cin>>n;
   string s,res="";cin>>s;
   int zero=0,flag=0,one=0,ind=0;
   for(int i=n-1;i>=0;i--)
   {      
        
         if((one>0||(i==0&&s[i]=='1'))&&zero>0&&(s[i]=='0'||(i==0&&s[i]=='1'))){ if(s[i]=='1'){s.erase(i,ind-(i));}
         else{s.erase(i+1,ind-(i+1));}
         
         flag=1;one=0;zero=0;ind=0;i=i+2;continue;}
         else  if(s[i]=='0'&&one==0){if(zero==0){ind=i;}zero++;continue;}
          else if(zero>0&&s[i]=='1'){one++;continue;}
        
          else if(s[i]=='1'&&zero==0){continue;}
   


   }
   cout<<s<<endl;

}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}