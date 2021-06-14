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
#define mod 1000000007
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
ll sum=0,res=0;
vector<ll> initializeDiffArray(vector<ll>& A)
{
	ll n = A.size();

	
	vector<ll> D(n + 1);

	D[0] = A[0], D[n] = 0;
	for (ll i = 1; i < n; i++)
		D[i] = ((A[i]%mod+mod)%mod - (A[i - 1]%mod+mod)%mod)%mod;
	return D;
}


void update(vector<ll>& D, ll l, ll r, ll x)
{
	// D[l]+=x;
     D[l]=((D[l]%mod+mod)%mod+(x%mod+mod)%mod)%mod;
	// D[r + 1]-=x;
       D[r+1]=((D[r+1]%mod+mod)%mod-(x%mod+mod)%mod)%mod;
  
}


void printArray(vector<ll>& A, vector<ll>& D)
{
	for (ll i = 0; i < A.size(); i++) {
		if (i == 0)
			{A[i] = (D[i]%mod+mod)%mod;}

		
		else
		{	A[i] = ((D[i]%mod+mod)%mod+ (A[i - 1]%mod+mod)%mod)%mod;}

	    // cout<<A[i]<<" ";
        sum=((sum%mod+mod)%mod+(A[i]%mod+mod)%mod)%mod;
	}
    
     ll s=A.size();
    
     sum=(sum%mod+mod)%mod;
    //   cout<<endl<<sum<<endl;
 for (ll i = 0; i < A.size()-1; i++){
    
    if(i!=0)
    { 
        ll pw=(A[i]%mod *A[i]%mod + mod)%mod;
        // cout<<pw<<" ";
        ll cal1=((s-(i+1))*i)%mod;
        ll cal2=(cal1%mod * pw%mod)%mod;
        res=(cal2+res)%mod;
     
        sum=((sum)-(A[i])%mod+mod)%mod;
        ll cal3=(s-2)%mod;
        ll cal4=(A[i])%mod;
         ll extra=(cal3*cal4)%mod;
         res=((extra*sum)%mod+(res))%mod;
        
       
         }
    else{
      sum=((sum)-(A[i])%mod+mod)%mod;
        ll cal3=(s-2)%mod;
        ll cal4=(A[i])%mod;
        ll extra=(cal3*cal4)%mod;
         res=((extra*sum)%mod +(res))%mod;
    
    }
  
  res=(res+mod)%mod;
// cout<<res<<" ";

 }


 res=res%mod;
	
}

 
 void solve(){
  int n;cin>>n;
  vll v;
  forf(int,i,n){ll num;cin>>num;v.pb(num);}
res=0;
sum=0;
  	vector<ll> D = initializeDiffArray(v);
	ll q;cin>>q;
    while(q--)
    { 
       
	   int type;
       ll l,r,b;
       cin>>type;
      cin>>l>>r>>b;
    //   b=(b%mod+mod)%mod;
      l--;r--;
	   if(type==1)
       {
	    update(D, l, r, b);
        
       }
	   else if(type==2){
           
		update(D, l, r, b*-1);
	
		   
	   }
       }
   printArray(v, D);
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

