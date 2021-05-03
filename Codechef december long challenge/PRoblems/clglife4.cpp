//https://www.codechef.com/MARCH21C/problems/COLGLF4
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
   ll n,e,h,a,b,c;cin>>n>>e>>h>>a>>b>>c;
   ll total_om,total_milk,total_cake,price=INT_MAX;
   total_om=e/2;total_milk=h/3;total_cake=min(e,h);
   if(total_cake<n){cout<<"-1"<<endl; return;}
//    if(n==e && n==h){price=n*c; cout<<price<<endl;return;}
   // base condition 
   if(total_om>=n){price=min(price,n*a);}
   if(total_milk>=n){price=min(price,n*b);}
   if(total_cake>=n){price=min(price,n*c);}

   // total_om+total_milk;
   if((total_om+total_milk)>=n && total_om<n && total_milk<n)
   {
       if(a>b){
           ll pc=total_milk*b+(n-total_milk)*a;
           price=min(price,pc);
       }
         if(b>a){
           ll pc=total_om*a+(n-total_om)*b;
           price=min(price,pc);
       }
   }

if((total_om+total_cake)>=n && total_om<n && total_cake<n)
   {
       if(a>c){
           ll pc=total_cake*c+(n-total_cake)*a;
           price=min(price,pc);
       }
         if(c>a){
           ll pc=total_om*a+(n-total_om)*c;
           price=min(price,pc);
       }
   }
if((total_milk+total_cake)>=n && total_milk<n && total_cake<n)
   {
       if(b>c){
           ll pc=total_cake*c+(n-total_cake)*b;
           price=min(price,pc);
       }
         if(c>b){
           ll pc=total_milk*b+(n-total_milk)*c;
           price=min(price,pc);
       }
   }
   cout<<price<<endl;
  
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