//https://www.hackerrank.com/contests/codegeeks-21/challenges/the-card-game-decoupling
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
   ll n;cin>>n;
  ll arr[n];
  forf(int,i,n){cin>>arr[i];}
  int i=0,j=n-1;
  ll alex=0,jess=0;
  int turn=0;
  if(n==1){alex+=arr[0];}
  while(i<=j&&n>1)
  {
       if(turn==0)
       {
           if(arr[i]>=arr[j])
           {
              alex+=arr[i];
              i++;
           }
           else{alex+=arr[j];j--;}
          turn=1;

       }
      else if(turn==1)
       {
           if(arr[i]>=arr[j])
           {
              jess+=arr[i];
              i++;
           }
           else{jess+=arr[j];j--;}
          turn=0;
          
       }
        
  }
   
  
    cout<<alex<<" "<<jess<<endl;
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}