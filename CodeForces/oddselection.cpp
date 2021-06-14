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
   int n,x;cin>>n>>x;
   int odd=0,even=0;
   forf(int ,i,n){int num;cin>>num;if(num%2==0){even++;}else{odd++;}}
   if(x%2==0&&odd>0&&even>0)
   {
       if(odd%2==0){odd--;}
       
       if(odd>0&&even>0&&odd+even>=x){cout<<"YES"<<endl;return;}
       else{cout<<"NO"<<endl;return;}
   }
  else if(x%2!=0&&odd>0)
  {
      if(odd>=x){cout<<"YES"<<endl;return;}
      if(odd%2==0)
      {
          odd--;
          if(odd+even>=x){cout<<"YES"<<endl;return;}
           else{cout<<"NO"<<endl;return;}
      }
      else if(odd+even>=x){cout<<"YES"<<endl;return;}
      else{cout<<"NO"<<endl;return;}
      
  }
   else if(odd==0||even==0){cout<<"NO"<<endl;}
   
return ;
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}