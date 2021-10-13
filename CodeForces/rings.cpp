//https://codeforces.com/contest/1562/problem/C
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
   int n;cin>>n;
   string s;cin>>s;

   int one=0,zero=0,idx=-1;
   forf(int,i,n){
       if(s[i]=='1'){one++;}
       else if(s[i]=='0'&&zero==0){idx=i;zero++;}
       else if(s[i]=='0'){zero++;}
   }
  
   if(zero==0){cout<<"1 "<<n-1<<" "<<"2 "<<n<<endl;return;}  //k will be 1
   if(one==0){cout<<"1 "<<n-1<<" "<<"2 "<<n<<endl;return;}   //k will be 1

if(idx!=-1 && idx >=(n/2)){cout<<"1 "<<idx+1<<" "<<"1 "<<idx<<endl;return;} //k will be 2
else if(idx!=-1){ cout<<idx+2<<" "<< n<< " "<<idx + 1<< " "<<n<<endl;return;} // k will be 1

}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}