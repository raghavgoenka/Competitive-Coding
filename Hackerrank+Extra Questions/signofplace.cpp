#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;

#define endl "\n"
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define all(v) (v).begin(),(v).end()
#define pii pair<ll,ll>
#define vii vector<pii>
#define calc_fact(n) tgamma(n+1)
#define inf LONG_LONG_MAX
#define MOD 1000000007
#define mod 998244353

signed main()
{
	FIO;

	ll n;string s;
	cin>>n>>s;

	// 1 based indexing
	vector<vi> dp(n+1,vi(n+1,0)); // stores the answer for current state dp[i][j]
	vector<ll> up(n+1,0); // prefix sum for every column starting from bottom rown
	vector<ll> down(n+1,0); // prefix sum for every column starting from top row

	// base cases
	for(ll i=1;i<=n;i++)
	{
		dp[i][1] = 1;
		down[i] = i;
		up[i] = n-i+1;
	}

	// j --> (j-2)th character of string
	for(ll j=2;j<=n;j++)
	{
		if(s[j-2]=='=')
		{
			for(ll i=1;i<=n;i++)
			{
				// if "==", number of ways of current state  = previous state
				dp[i][j] = dp[i][j-1];
			}
		}
		else if(s[j-2]=='<')
		{
			for(ll i=1;i<n;i++)
			{
				// get the prefix sum for downwards rows for previous state using up[i+1][j-1]
				dp[i][j] = up[i+1];
			}
		}
		else
		{
			for(ll i=n;i>1;i--)
			{
				// get the prefix sum for upwards rows for previous state using down[i-1][j-1]
				dp[i][j] = down[i-1];
			}
		}

		// fill the prefix sum for current column
		// from topmost row to bottom row
		down[1] = dp[1][j];
		for(ll i=2;i<=n;i++)
		{
			down[i] = (dp[i][j] + down[i-1])%MOD;
		}

		// fill the prefix sum for current column
		// from bottom row to topmost row
		up[n] = dp[n][j];
		for(ll i=n-1;i>=1;i--)
		{
			up[i] = (dp[i][j] + up[i+1])%MOD;
		}
	}

	ll ans = 0;

	for(ll i=1;i<=n;i++)
	{
		ans = (ans+dp[i][n])%MOD;
	}

	cout<<ans;
	
}