#include "bits/stdc++.h"


using namespace std;


#define int long long
#define flash ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MP make_pair
#define PB push_back
#define FF first
#define SS second
#define MOD 1000000007
#define inf 1e18
#define test int t;cin>>t;while(t--)
#define REP(i,a,b) for (int i = a; i < b; i++)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()


typedef vector<int> VI;
typedef vector<vector<int>> VVI;
typedef pair<int, int> PII;
typedef vector<PII> VPII;
typedef set<int> SI;
typedef map<string, int> MSI;
typedef map<int, int> MII;
typedef unordered_map<int, int> UMII;
typedef pair<int, PII> PIII;


 



void abc(VPII &vp)
{
    int n = vp.size();
    VPII ans;
    for(int i=0;i<vp.size();i++)
    {
        
        int j=i;
        int l=vp[i].FF,r=vp[i].SS;
        
        while(j<n-1 && r>=vp[j+1].FF)
        {
            j++;
            r=max(r,vp[j].SS);
            
        }
        i=j;
        ans.push_back({l,r});
    }
    int m = ans.size();
    vp.assign(m,{});
    for(int i=0;i<m;i++)
    {
        vp[i].FF = ans[i].FF;
        vp[i].SS = ans[i].SS;
    }
}
void solve()
{
    int n;
    cin >> n;
    VI v(n);
    VPII a(n);
    REP(i,0,n)
    {
        cin >> v[i];
        a[i]={v[i],i};
    }

  
    int ans = 0;
    sort(all(a));

    
    VPII vp;


    for(int i=0;i<n;i++)
    {
    
        if(a[i].SS < i)
        {
            vp.PB({a[i].SS,i});
        }
    }
    sort(all(vp));
    abc(vp);
    for(int i=0;i<vp.size();i++)
    {
        int l = vp[i].FF;
        int r = vp[i].SS;
        int x = -1,y=INT_MAX;
        for(int k=l;k<=r;k++)
        {
            x = max(x,v[k]);
            y = min(y,v[k]);
        }
        ans+=(x-y);
    }
    cout << ans << "\n";
}

int32_t main()
{
    flash;

    test
    {
        solve();
    }
  

    return 0;
}