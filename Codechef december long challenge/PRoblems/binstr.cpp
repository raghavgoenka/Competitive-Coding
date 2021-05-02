//https://www.codechef.com/APRIL21C/problems/MEXSTR
#include <bits/stdc++.h>
#include <bits/extc++.h>
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define endl "\n"
#define EPS 1e-9
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forf(t,i,n) for(t i=0;i<n;++i)
#define forr(t,i,n) for(t i=n-1;i>=0;--i)
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
typedef map<string,int>ml;
#define mx 1000000
ll dp[mx+2],dp1[mx+2] ,nn_1[mx],nn_2[mx];

void solve(){
		string s;
		cin>>s;
		int n=s.length(); 
		int pos=-1;
		forf(int,i,n){
			if(s[i] == '0'){
				for(int j=pos+1;j<=i;++j)
					nn_1[j]=i;
					pos=i;
				
			}
		}
		for(int i=pos+1;i<n;++i){
		{	nn_1[i]=n;}
			
		}
		if(nn_1[0] == n){
		   cout<<"0"<<endl;
		    return ;
		}
		pos=-1;
		forf(int,i,n){
			if(s[i] == '1'){
				for(int j=pos+1;j<=i;++j)
					nn_2[j]=i;
					pos=i;
				
			}
		}
		for(int i=pos+1;i<n;++i)
			{nn_2[i]=n;}
		
	
		dp[n]=dp[n+1]={0};
		dp1[n]=dp1[n+1]={0}; 
		
		forr(int,i,n){
			dp[i]=dp[i+1];
			if(s[i] == '0' && nn_2[i] < n)
				dp[i]=max(dp[i],dp[nn_2[i]+1]+1);
		   if(s[i] == '1' && nn_1[i] <n)
		        dp[i]=max(dp[i],dp[nn_1[i]+1]+1);		
			    dp1[i]=dp1[i+1];
			if(nn_2[i] < n)
			    dp1[i]=max(dp1[i],dp[nn_2[i]+1]+1);
			
		}
		
		int len=dp1[0]+1;
		int ind=nn_2[0]+1;
		vector<int>v;
		v.pb(1);
		for(int i=1;i<len;i++)
		{
			if(ind >= n){
				v.pb(0);
				continue;
			}
			if(nn_1[ind] >= n){
			   v.pb(0);
			    ind=nn_1[ind]+1;
			    continue;
			}
			if(dp[nn_1[ind]+1] <len-i-1){
				v.pb(0);
				ind=nn_1[ind]+1;
			}else{
				v.pb(1);
				ind=nn_2[ind]+1;

			}
		}
		forf(int,i,v.size()){cout<<v[i];}
		cout<<endl;
}

int main(){
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}
