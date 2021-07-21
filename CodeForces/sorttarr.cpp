//https://codeforces.com/contest/451/problem/B
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
   int a[n],b[n];
   forf(int,i,n){cin>>a[i];b[i]=a[i];}
   sort(b,b+n);
   int in1=-1,in2=-1;
   forf(int,i,n){if(a[i]!=b[i]){in1=i;break;}}
   forr(int,i,n){if(a[i]!=b[i]){in2=i;break;}}
   if(in1==-1&&in2==-1){cout<<"yes"<<endl<<"1 1"<<endl;return;}
   int a1=in1,b1=in2;
   while(in1<in2)
   {
       int tmp=a[in2];
       a[in2]=a[in1];
       a[in1]=tmp;
       in1++;in2--;
   }
   forf(int,i,n){if(a[i]!=b[i]){cout<<"no"<<endl;return;}}
  cout<<"yes"<<endl<<a1+1<<" "<<b1+1<<endl;
}

int main(){
    

    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}