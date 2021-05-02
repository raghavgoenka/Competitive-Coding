//https://www.codechef.com/MARCH21C/problems/PAPARAZI
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
typedef vector<pair<long long int,long long int>> vp;
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
typedef unordered_map<long long, long long> umll;

void solve(){
   ll n;cin>>n;
   vp s1,s2;

ll res=1;
   forf(int,i,n){
       ll num;cin>>num;
       s1.pb({i+1,num});
       }
     if(n==2){cout<<"1"<<endl;return;}
     s2.pb(s1[0]);s2.pb(s1[1]);
     ll cap=s2.size();
     for(int i=2;i<n;i++)
     {
         while(s2.size()>=2)
         {
             double slope1=(double(s2[cap-1].second)-double(s2[cap-2].second))/(double(s2[cap-1].first)-double(s2[cap-2].first));
             double slope2=(double(s1[i].second)-double(s2[cap-1].second))/(double(s1[i].first)-double(s2[cap-1].first));
             if(slope1<=slope2)
             {
                 s2.pop_back();
                 cap--;
             }
             else {break;}
         }
         s2.pb(s1[i]);cap++;
         res=max(res,s2[cap-1].first-s2[cap-2].first);
     }
cout<<res<<endl;


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