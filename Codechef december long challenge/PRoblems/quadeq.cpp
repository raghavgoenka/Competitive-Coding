//https://www.hackerearth.com/challenges/competitive/may-circuits-21/algorithm/quadratic-equation-4-22fecbd9/
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
typedef vector<pair<int,int>>vp;
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
typedef unordered_map<long long, long long> umll;
typedef map<long long ,long long>mll;
void solve(){
   ll l,r;cin>>l>>r;
   ll count=0;
//    count+=(r-l)/2;
//  if(l%2!=0&&r%2!=0){count+=1;}
   ll st=sqrt(r);
   for(ll i=1;i<=st;i++)
   {   
       double d=2*i,j,a,b;
       if(l<=(i*i)){a=i*i;}
         if(l>=(i*i)){
          j=l-(i*i);
          j=ceil(j/d);
          j+=1;
          a =(i*i)+(j-1)*d;}
         j=r-(i*i);
          j=floor(j/d);
          j+=1;
          b=(i*i)+(j-1)*d;
         //  cout<<a<<"--"<<b<<" ";
         count+=((b-a)/d)+1;
         
     
   
   }
cout<<count<<endl;
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}