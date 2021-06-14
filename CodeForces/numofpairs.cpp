//https://codeforces.com/contest/1538/problem/C
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
   ll n ,l,r;cin>>n>>l>>r;
   ll arr[n];
   ll sum=0;
  
   forf(int ,i,n){cin>>arr[i];sum+=arr[i];}
   sort(arr,arr+n);
ll res=0;
   int i=0;
  while(i<n-1)
    {
        int x=i+1,y=n-1,aa=-1,bb=-1;
        while(x<=y)
        {
            int mid=(x+y)/2;
            ll k1=arr[mid],k2=arr[i];
            if((k1+k2)>=l&&(k1+k2)<=r)
            {
                aa=mid;
                y=mid-1;
            }
            else if((k1+k2)>r)
           { y=mid-1;}
            else
            {x=mid+1;}
        }
        
        x=i+1,y=n-1;
        while(x<=y)
        {
            int mid=(x+y)/2;
            ll k1=arr[mid],k2=arr[i];
            if((k1+k2)>=l&&(k1+k2)<=r)
            {
                bb=mid;
                x=mid+1;
            }
            else if((k1+k2)>r)
           { y=mid-1;}
            else
            {x=mid+1;}
        }
       
        if(aa!=-1&&bb!=-1)
        {res+=(bb-aa+1);}
        i++;
    }
    cout<<res<<endl;
  

}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}