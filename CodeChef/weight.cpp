#include "bits/stdc++.h"

using namespace std;

#define int long long
#define flash ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MP make_pair
#define PB push_back
#define FF first
#define SS second
#define MOD 998244353
#define test int t;cin>>t;while(t--)
#define REP(i,a,b) for (int i = a; i < b; i++)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()

int cl(int p,int q)
{
    int mod = 998244353, expo;
    expo = mod - 2;
 
    // Loop to find the value
    // until the expo is not zero
    while (expo) {
 
        // Multiply p with q
        // if expo is odd
        if (expo & 1) {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;
 
        // Reduce the value of
        // expo by 2
        expo >>= 1;
    }
    return p;
}    
   

int poww(int n,int r)
{
    int res=1;
    while(r)
    {
        if(r&1)
        res=(res*n);
        n=(n*n);
        r=r>>1;
    }
    return res;
}
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}

 int factorial( int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}

/***SOLVE AREA***/
void solve()
{
    
    int n;
    cin >> n;
    int num = n;
   
    if(n==1)
    {
        cout << "1\n";
    }
    else{
        int r=cl(n*(n+1),2);
        int z = cl(r*r,1);
        
      
       
        cout << cl(z,n) << "\n";
    }
    
}
/******/

int32_t main()
{
    flash;

    test
    {
        solve();
    }
    //solve();

    return 0;
}