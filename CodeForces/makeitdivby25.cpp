//https://codeforces.com/contest/1593/problem/B
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
   ll n;cin>>n;
   ll n1=n;
   string s=to_string(n);
   if(n%25==0){cout<<0<<endl;return;}
  int num=0,rem=0,flag=1,t=0,c=0,d=0;
   while(n>0)
   {
        rem=n%10;
        if(rem==5&&flag==1){t=5;flag=0;}
        else{
           num=rem*10+t;
           if(num%25==0&&flag!=1){break;}
           else{c++;}
        }
        n=n/10;
   }
  
   flag=1;
   while(n1>0)
   {
        rem=n1%10;
        if(rem==0&&flag==1){t=0;flag=0;}
        else{
           num=rem*10+t;
           if(num%25==0&&flag!=1){break;}
           else{d++;}
        }
        n1=n1/10;
   }

   
   cout<<min(c,d)<<endl;

}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}