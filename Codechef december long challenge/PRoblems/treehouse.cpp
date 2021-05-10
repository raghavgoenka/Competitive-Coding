//https://www.codechef.com/MAY21B/problems/THOUSES
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
#define mod 1000000007
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<long,long>>vp;
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
typedef unordered_map<long long, long long> umll;
typedef map<long long ,long long>mll;
umll mp1;
vll v[1000001];
ll count1[1000001];
void numberOfNodes(ll s, ll e)
{
   vector<ll>::iterator u;
  
    count1[s] = 1;
    for (u = v[s].begin(); u != v[s].end(); u++) {
      
          if (*u == e)
            { continue;}
          numberOfNodes(*u, s);
          count1[s] += count1[*u];
    }
}
bool cc(const pair<ll,ll> &a,const pair<ll,ll> &b)
{ 
    if(a.second==b.second&&mp1[a.first]!=mp1[b.first]&&a.second!=0&&b.second!=0)
    {cout<<"in "<<" "; 
        //add here hwen num of elem ar equal but height is different then max goes to more height one
    //    cout<<a.first<<"--"<<a.second<<endl;
    //    cout<<b.first<<"--"<<b.second<<endl;
        if(mp1[a.first]>mp1[b.first]){return true;}
        else{return false;}
    }
    return (a.second >b.second);
}

void solve(){
   
   
   ll n,x;cin>>n>>x;
   umll mp ;
  
  mp1.clear();
   umll mp_val;
   forf(ll,i,n+3){v[i+1].clear();count1[i+1]=0;}
   x=x%mod;
   forf(ll,i,n-1)
   {  ll a,b;cin>>a>>b;
      
       v[a].pb(b);
       mp1[a]=v[a].size();
   }
//    for(auto i:mp1){cout<<i.first<<"--"<<i.second<<" ";}
   // if height of subtree is greater n number of elements are more then the max value goes to other side!
   // else if height of subtree is more n number of elements are same then max value will go the this side!
   numberOfNodes(1, 0);
 

   for (ll i = 1; i <=n; i++) {
    //    cout << "\nNodes in subtree of " << i;
    //     cout << ": " << count1[i];
        mp[i]=count1[i]-1;
    }
//     cout<<endl;
//    for(auto i:mp){cout<<i.first<<"--"<<i.second<<" ";} 
   mp_val[1]=x%mod;
   for(ll i=1;i<=n;i++)
   {  
      if(v[i].size()==0){continue;}
       if(v[i].size()==1){mp_val[v[i][0]]=mp_val[i]%mod;continue;}
       vp st;
      for(ll node:v[i])
      {   
           st.pb({node,mp[node]});
      }
      sort(st.begin(), st.end(), cc);

      for (ll p=0; p<st.size(); p++)
    	{   
		     mp_val[st[p].first]=((mp_val[i]%mod)*((p+1)%mod))%mod;
    	}
   }
     ll sum=0;
     for(auto i:mp_val){
        //  cout<<i.first<<"--"<<i.second<<" ";
    sum=((sum%mod)+(i.second%mod))%mod;}
     cout<<sum<<endl;
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}