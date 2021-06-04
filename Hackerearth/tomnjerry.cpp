//https://www.hackerearth.com/challenges/competitive/may-circuits-21/algorithm/tom-and-jerry-love-matrices-16fd6e8e/
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
   ll m ,n,x,q;cin>>m>>n>>x>>q;
   vvll vp( m,vector<ll> (n, 0));
 mll mp;
 ll c=1;
 ll t=0,flag=0;
 for(ll i=x+2;i<=x+n+m;i++)
 { t++;
 
     if(t>=min(n,m)&&t<=max(n,m)){mp[i]=min(n,m);flag=1;}
     else if(flag==0){mp[i]=c;c++;}
     else if(flag==1){if(c==min(n,m)){c=min(n,m)-1;}mp[i]=c--;}
    
 }
// for(auto i:mp)
// {
//     cout<<i.first<<"--"<<i.second<<" ";
// }


   while(q--)
   {
       int a;cin>>a;
       if(a==1)
       {
          ll r,c1,c2;cin>>r>>c1>>c2;
        //   c2=n-c2;
         
          for(ll i=c1-1;i<c2;i++){mp[x+r+i+1]--;}
    //    fill(vp[r].begin()+c1-1,vp[r].end()-c2,-1);
       }
       else if(a==2)
       {
          ll r,c1,c2;cin>>r>>c1>>c2;
         
         
          for(ll i=c1-1;i<c2;i++){mp[x+r+i+1]--;}
       }
       else if(a==3){
              ll k;cin>>k;
              for(auto i:mp)
              {
                  ll p=i.second;
                  k-=p;
                  if(k<=0){cout<<i.first<<endl;break;k=-50;}
                  
              }
             
             if(k>0){cout<<"-1"<<endl;}
       }
   
   }

  
}

int main(){
    

    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}