//https://codeforces.com/problemset/problem/43/C
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
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
typedef unordered_map<long long, long long> umll;
ll getSum(ll n)
    {
        ll sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }
void solve(){
   int n,c=0;cin>>n;
   ll arr[n];
   forf(int,i,n){cin>>arr[i];if(arr[i]%3==0){c++;arr[i]=0;}else{arr[i]=getSum(arr[i]);}}
   c=c/2;
   sort(arr,arr+n);
   forf(int,i,n)
   {   if(arr[i]==0){continue;}
       for(int j=1;j<n;j++)
       {
           if((arr[i]+arr[j])%3==0){c++;arr[i]=0;arr[j]=0;}
       }
   }
cout<<c<<endl;


}

int main(){
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}