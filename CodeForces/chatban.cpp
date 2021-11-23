//https://codeforces.com/contest/1612/problem/C
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
   ll k,x;cin>>k>>x;
   if(k==1){
       cout<<"1"<<endl;return;
   }
   ll ss=x;
   ll totmsg=2*k-1;
   ll sum=k*(k+1)/2;
   if(x==sum){cout<<k<<endl;return;}
   if(x>sum){
      
       x=x-sum;
      ll sum2=sum-k;
      ll tot=sum+sum2;
     
      if(ss>=tot){cout<<2*k-1<<endl;return;}
      ll fst=2*(k-1)+1;
      fst=fst*fst;
     
      x=x*2;
      double rt=fst-double(4*x);
     
       rt=double(sqrt(rt));
      
      rt=rt+(2*(k-1)+1);
      rt=rt/2;
    cout<<rt<<" ";
      if(ceil(rt)==floor(rt)){
           cout<<ll(ceil(rt))+k<<endl;
       }
       else{
           cout<<ll(floor(rt))+k<<endl;
       }


   }
   else{
       x=x*2;
        double xt=4*x;;
       double rt=sqrt(1+xt);
       rt=rt-1;
       rt=rt/2;
       if(ceil(rt)==floor(rt)){
           cout<<ceil(rt)*1<<endl;
       }
       else{
           cout<<ceil(rt)*1<<endl;
       }
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