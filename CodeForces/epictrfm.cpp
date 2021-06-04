//https://codeforces.com/contest/1506/problem/D
#include <bits/stdc++.h>

#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define endl "\n"
#define EPS 1e-9
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forf(t, i, n) for (t i = 0; i < n; i++)
#define forr(t, i, n) for (t i = n - 1; i >= 0; i--)
#define print(x)              \
    for (const auto &e : (x)) \
    {                         \
        cout << e << " ";     \
    }                         \
    cout << endl

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
typedef map<long long, int> mll;

void solve()
{
    int n,count=0;
    cin >> n;
    mll mp;
    forf(int, i, n)
    {
        ll num;
        cin >> num;
        mp[num]++;
    }
    count=n;
    priority_queue<long int> pq;
    for(auto i:mp)
    {   
        pq.push(i.second);
    }
    
    if(pq.top()==n){cout<<n<<endl;return;}
   while(pq.size()>1)
   {
       int a=pq.top();
       pq.pop();
       int b=pq.top();
       pq.pop();
       a--;b--;
       if(a>0){pq.push(a);}
       if(b>0){pq.push(b);}
    
      
       count=count-2;
   }
    cout << count << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}