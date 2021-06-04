//https://codeforces.com/contest/1436/problem/B
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
bool isPrime[100+1];
void prime(){
        for(int i = 0; i <= 100;++i) {
            isPrime[i] = true;
        }
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i * i <= 100; ++i) {
             if(isPrime[i] == true) {                    
                 for(int j = i * i; j <= 100 ;j += i)
                     isPrime[j] = false;
            }
        }
}  
 
void solve(){
   int n,c=0,t=1;cin>>n;
   int arr[n][n]={0};
   if(isPrime[n]==1){c=1;}
   int k=n;
    if(isPrime[n]!=1 && n%2!=0){k=k-1;}
       forf(int,i,k)
       {
           forf(int,j,n)
           {
               if(i==j){arr[i][j]=t;}
               else if ((i + j) == (n - 1)){arr[i][j]=t;}
               else{arr[i][j]=c;}
           }
       }
   if(k<n)
   {
      int i=k,p=n/2;
      arr[i][0]=1;arr[i][k]=1;
      arr[i][p]=1;
      arr[p][0]=1;
      

   }
forf(int,i,n)
{
    forf(int,j,n){cout<<arr[i][j]<<" ";}
    cout<<endl;
}
}

int main(){
    
   prime();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}