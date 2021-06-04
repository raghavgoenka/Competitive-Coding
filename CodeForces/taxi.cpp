//https://codeforces.com/contest/158/problem/B
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

void solve(){
   int n;cin>>n;
   int arr[n],freq[5]={0};
   forf(int,i,n){cin>>arr[i];freq[arr[i]]++;}
   sort(arr,arr+n);
   int count=0;
   count+=freq[4]+(freq[2]/2);
   freq[4]=0;
   if(freq[2]%2==0){freq[2]=0;}
   else{freq[2]=freq[2]%2;}

   int c=min(freq[1],freq[3]);
   freq[1]-=c;freq[3]-=c;
   count+=c;
  
   if(freq[3]>0){count+=freq[3];freq[3]=0;}
   if(freq[1]>=4){count+=freq[1]/4;freq[1]=freq[1]%4;}

   if(freq[1]+freq[2]*2>4){count+=2;}
   else if(freq[1]+freq[2]*2<=4 && freq[1]+freq[2]*2>0){count+=1;}
   




   cout<<count<<endl;
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