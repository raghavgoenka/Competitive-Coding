//https://www.codechef.com/MAY21C/problems/ISS
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

#define N 4000009

int a[N],a2[N];
void calculateTotientValue()
{
	
 for(int i=0;i<N;i++){a[i]=i;a2[i]=0;}

	for (int  i=2; i<N; i++)
	{
		if (a[i]==i)
		{
			a[i] = i-1;
			for (ll j = 2*i; j<N; j+=i)
			{
				if (a[j]!=0)
					a[j] = j;

				a[j] = (a[j]/i)*(i-1);
			}
		}
	}
}


void gcdpairsuminrange()
{
	
	calculateTotientValue();

		for (int i=1; i<N; ++i)
	{
		
      a2[i]+=i-1;
		for (int j=2*i; j<N; j+=i)
			a2[j] += i*((1+a[j/i])/2);
	}

	
	
}

 
void solve(){
     int k;scanf("%d",&k);

 printf("%d\n",a2[(4*k)+1]);
}

int main(){
   gcdpairsuminrange();
    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}

