//https://www.hackerearth.com/challenges/competitive/april-circuits-21/algorithm/special-sequence-1cbd35f9/
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
typedef map<long long, long long> umll;
vll vp;
#define N 10000000000000
void preprocess()
{
    ll sum=0;
    ll i=1,p=0;
    while(sum<=N)
    {   
         p=i*floor(sqrt(i))+ceil(double(i)/double(2));
        sum+=p;
        
        vp.pb(sum);
		i++;
    }
}
void solve(){
  ll lt,rt;
  cin>>lt>>rt;
  int cnt=0;
  if(lt==rt){cout<<"1"<<endl ;return;}
  for(ll i=0;i<vp.size();i++)
  {    if(lt>=rt){break;}
      if(lt>vp[i]){continue;}
      
      if(lt<=vp[i]){cnt++;lt=vp[i];}
  }
  cout<<cnt<<endl;
}
 
int main(){
    
    preprocess();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ll t;cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}