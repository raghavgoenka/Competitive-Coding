//https://codeforces.com/contest/1538/problem/A
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
   int arr[n];
   int mn=INT_MAX,mx=INT_MIN;
   int ind1=0,ind2=0;
   forf(int,i,n){cin>>arr[i];if(arr[i]>mx){mx=arr[i];ind1=i;}if(arr[i]<mn){mn=arr[i];ind2=i;}}
   int c=0;
  
   c=min(abs(0-ind1),(n-1)-ind1)+1;//max num
   int d=min(abs(0-ind2),(n-1)-ind2)+1;//min num
   int p=min(c,d);
   if(abs(ind1-ind2)==1){cout<<p+1<<endl;return;}
   else {
       if(c<=d)
       {  
           if(ind1<ind2){ind2-=p;}
    
         p+=min(abs(0-ind2),(n-p-1)-ind2)+1;
         
       }
       else if(c>d)
       {   
           if(ind2<ind1){ind1-=p;}
            p+=min(abs(0-ind1),(n-p-1)-ind1)+1;
       }
       cout<<p<<endl;
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