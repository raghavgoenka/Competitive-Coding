//https://codeforces.com/problemset/problem/817/B
#include <bits/stdc++.h>

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
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
typedef unordered_map<long long, long long> umll;
typedef map<long long,int> ml;
ll printNcR(ll n,ll r)
{
  ll p = 1, k = 1;
    if (n - r < r)
		r = n - r;

	if (r != 0) {
		while (r) {
			p *= n;
			k *= r;
           ll m = __gcd(p, k);
            p /= m;
			k /= m;
            n--;
			r--;
		}
    }

	else
		{p = 1;}
return p;
	
}
void solve(){
   int n;cin>>n;
   ll arr[n];
   forf(int,i,n){cin>>arr[i];}
   sort(arr,arr+n);
ll count=1;
  ml mp;
  int c=0,num=INT_MIN;
  
  for(int i=0;i<n&&c<=3;i++)
  {   
      if(arr[i]!=num){c++;num=arr[i];}
      if(c>3){break;}
      mp[arr[i]]++;
  }
  ll a[3]={0};
  c=0;
  for(auto i:mp){a[c]=i.second;c++;}
 
  if(a[0]>=3){cout<<printNcR(a[0],3)<<endl;return;}
  if((a[0]+a[1])>=3){

      if(a[0]>=1 && a[1]>1 ){count=printNcR(a[1],3-a[0]);}
  else if(a[0]>1 && a[1]<=1){ count*=(a[0]-1)*a[1];}
  
  }
 
else{
    
  
     count*=a[0]*a[1]*a[2];
     
 }
cout<<count<<endl;


}

int main(){
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}