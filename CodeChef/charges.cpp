//https://www.codechef.com/LTIME96B/problems/CHARGES
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
   ll n,k;cin>>n>>k;
   string s;cin>>s;
   ll c=0;
   forf(int,i,n-1){if(s[i]==s[i+1]){c+=2;}else{c+=1;}}

   while(k--)
   {
       ll a;cin>>a;
       if(s[a-1]=='0'){s[a-1]='1';}
       else{s[a-1]='0';}
       if(n==1){cout<<"0"<<endl;continue;}
       if(a==1)
       {
           if(s[a]==s[a-1]){c++;}
           else{c--;}
       }
       else if(a==n){
           if(s[a-1]==s[a-2]){c++;}
           else{c--;}
       }
       else{
           if(s[a]==s[a-1]){c++;}
           else{c--;}


           if(s[a-1]==s[a-2]){c++;}
           else{c--;}
       }
       cout<<c<<endl;

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