//https://codeforces.com/contest/1263/problem/B
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
typedef unordered_map<string ,int> umll;
typedef map<string ,int>mll;
void solve(){
   int n;cin>>n;
   umll mp;
   int flag=0,count=0;
   string arr[n];
   forf(int,i,n){cin>>arr[i];mp[arr[i]]++;}
   forf(int,i,n){
       if(mp[arr[i]]>1)
       {
           
               for(int p=0;p<4;p++)
               {
                   for(int z=0;z<=9;z++)
                   {
                       string temp=arr[i];
                       temp[p]='0'+z;
                   
                       if(mp[temp]==0){mp[temp]++;count++;flag=1; mp[arr[i]]--;arr[i]=temp;break;}
                      
                       
                   }
                   if(flag==1){flag=0; break;}
               }
           
       }
   }
  
   cout<<count<<endl;
   forf(int,i,n){cout<<arr[i]<<endl;}

}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}