//https://codeforces.com/contest/1541/problem/B
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
   ll arr[n];
   mll mp;
   forf(int,i,n){cin>>arr[i];mp[arr[i]]++;}
   if(n==2)
   { int p=0;
       if(arr[0]*arr[1]==3){p++;}
       cout<<p<<endl;return;
   }
   ll count=0;
   forf(int,i,n)
   {
       ll p=(2*i)+3;
       ll j=n+i+1;
       ll num=arr[i];
       ll res=-1;
       mp[arr[i]]=0;
      
       
       if(p%num==0){res=p;}
       else{res=(p/num)+1;res=res*num;}
   
       
       for(ll k=res;k<=j;k+=num)
       {
           ll num2=k/num;
           
           if(mp[num2]>0){count++;}
       }

       
   }
   cout<<count<<endl;

}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}