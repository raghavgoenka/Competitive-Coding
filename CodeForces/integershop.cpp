#include "bits/stdc++.h"

using namespace std;

#define int long long
#define flash ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MP make_pair
#define PB push_back
#define FF first
#define SS second
#define MOD 1000000007
#define test int t;cin>>t;while(t--)
#define REP(i,a,b) for (int i = a; i < b; i++)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()


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

/***SOLVE AREA***/
void solve()
{
    int n;
    cin >> n;
    int a[n],b[n],c[n];
    REP(i,0,n)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    int ans = c[0];
    cout << ans << "\n";
    for(int i=1;i<n;i++)
    {
        if(a[i]>=b[i-1])
        {
            ans=c[i]+c[i-1];
            cout << ans << "\n";
        }
        else if(b[i]>=b[i-1])
        {
            int j=i-1;
            while(a[i]<=b[j] && j>=0)
            j--;
            if(j<0)
            j++;
            if(a[i]==a[j])
            {
                ans = c[i];
                cout << ans << "\n";
            }
            else{
                ans=c[i]+c[j];
                cout << ans << "\n";
            }


        }
        else if(b[i]<b[i-1])
        {
            int j=i;
            while(a[j]<=a[i])
            {
                j--;
            }
            //cout << "j is" << j << "\n";
            if((j+1)==i)
            ans = max(ans,c[i-1]);
            else
            ans = max(ans,c[j+1]);
            cout << ans <<"\n";
        }
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