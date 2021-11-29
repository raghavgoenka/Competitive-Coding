
//https://codeforces.com/contest/1614/problem/B
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
typedef vector<pair<long long,long long >>vp;
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
typedef unordered_map<long long, long long> umll;
typedef map<long long ,long long>mll;
void solve(){
   int n;cin>>n;
    // vi a(n);
    vp a;
    forf(int,i,n){int p;cin>>p;a.pb({p,i});}
    sort(rall(a));
    int ct[n+1];
    ct[0]=0;
    ll res=0;
    int j=0,k=0,flag=0;

    forf(int,i,n)
    { if(flag==0){
        j+=1;
        ct[a[i].second+1]=j;
      
        res+=2*abs(0-j)*a[i].ff;
       
        flag=1;
        }
        else{k=k-1;ct[a[i].ss+1]=k;res+=2*abs(0-k)*a[i].ff;flag=0;}
        
    }
    cout<<res<<endl;
    forf(int,i,n+1)
    {
        cout<<ct[i]<<" ";
    }
    cout<<endl;


}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}