//https://codeforces.com/contest/1521/problem/A
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
#define N 1e18+1
void solve(){
   ll a,b;cin>>a>>b;
   ll num=a*b;
   ll con=a*b;
   ll p=a*2;
   ll i=3,x,y,z,flag=1;
   if(b==1){cout<<"NO"<<endl;return;}
 while(p<N)
 {  
      ll d=abs(num-p);
      
      if(d!=0&&p!=d&&(d)%a==0&&((p)/a!=a)&&d!=a&&d!=num&&d%con!=0&&p%con!=0){x=p,y=num,z=d;flag=0;break;}
      
      i++;
      p=a*i;
}
 if(flag==0)
 {cout<<"YES"<<endl;
     if(x+y==z){cout<<x<<" "<<y<<" "<<z<<endl;}
     else if(y+z==x){cout<<y<<" "<<z<<" "<<x<<endl;}
     else if(x+z==y){cout<<z<<" "<<x<<" "<<y<<endl;}
     return;
 }
cout<<"NO"<<endl;
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}