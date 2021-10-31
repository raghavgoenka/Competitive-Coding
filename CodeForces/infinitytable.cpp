//https://codeforces.com/contest/1560/problem/C
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
   ll p=1,power=2,i=1;
   if(n==p){cout<<"1 1"<<endl;return;}
   p=2;
   while(n>1)
   {
       if(n<=(p+power))
        { 
           int res=power/2;
           if(n==p){cout<<"1"<<" "<<i+1<<endl;return;}
         if(n<=(p+res))
         {  
             int diff=abs(n-(p+res));
             int rem=diff%res;
            
             if(rem==0){cout<<i+1<<" "<<i+1<<endl;return;}
             else{cout<<abs(res-rem)+1<<" "<<i+1<<endl;return;}
         }
         else if(n>(p+res)){
              int diff=(p+power)-n;
             int rem=diff%res;
             if(rem==0){cout<<i+1<<" "<<1<<endl;return;}
             else{cout<<i+1<<" "<<rem+1<<endl;return;}
         }
       }
       p=p+power+1;
       i++;
       power=2*i;
      
        
   }
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}