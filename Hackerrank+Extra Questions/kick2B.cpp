//https://codingcompetitions.withgoogle.com/kickstart/round/0000000000435c44/00000000007ec1cb
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
void solve(int t){
   ll g;cin>>g;
   ll count=0;
  

  ll ap=1;
  ll d=1,i=2;
  while(ap<=g)
  {
      if((g-ap)%d==0){count++;}
      d++;
      ap+=i;
      i++;
  }
  
    cout << "Case #"<<t<<": "<<count<<endl; 
}

int main(){
    

    flash;

    ll t; cin >> t;
    int i=1;
    while(i<=t){
        solve(i);
        i++;;
    }
    
    return 0;
}