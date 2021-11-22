//https://www.codechef.com/COOK134B/problems/ZEROONE
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
   vi a(n),zero,one;
   forf(int,i,n){cin>>a[i];
   if(i%2){one.pb(a[i]);}
   else{zero.pb(a[i]);}
   }
    sort(rall(zero));
    sort(all(one));
   ll count=0,o=0,z=0;
    int j=0,k=0,p=one.size()-1;
    forr(int,i,one.size()){
         o+=one[i];
        z=zero[i];
       
        count+=o*z;
        p--;
    }
    forf(int,i,n){
        if(i%2){
            cout<<one[j]<<" ";j++;
        }
        else{
            cout<<zero[k]<<" ";k++;
        }
    }
    
cout<<endl<<count<<endl;
   
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}