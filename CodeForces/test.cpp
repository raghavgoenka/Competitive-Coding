#include "bits/stdc++.h"

#include<deque>

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
    int arr[n];
    REP(i,0,n)
    {
        cin >> arr[i];
    }
    list <int> ans;
    int i=0,j=n-1;
    while(i<=j)
    {
        if(i==j)
        {
            ans.push_back(arr[i]);
            i++;j--;
        }
        if(arr[i]>arr[j])
        {
            ans.push_front(arr[i]);
            i++;
        }
        else {
            ans.push_back(arr[j]);
            j--;
        }
        

    }
    cout<<"1";
    list <int> :: iterator it;
    for (it = ans.begin(); it != ans.end(); ++it)
        cout << "1" << " ";
    cout << '\n';
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