//https://codeforces.com/contest/1515/problem/A
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
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
typedef unordered_map<long long, long long> umll;
typedef map<long long ,long long>mll;
void solve(){
   int n,x;cin>>n>>x;
   int arr[n]={0},sum=0;
   forf(int,i,n){cin>>arr[i];sum+=arr[i];}
   sort(arr,arr+n);
   if(sum==x){cout<<"NO"<<endl;}
   else{cout<<"YES"<<endl;
  int i=0;
  sum=0;
    while(i<n)
    {   sum+=arr[i];
        if(sum==x){cout<<arr[i+1]<<" "<<arr[i]<<" ";i+=2;}
        else{cout<<arr[i]<<" ";i++;
        }
    }
cout<<endl;
   }
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}