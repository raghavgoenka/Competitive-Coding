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
typedef vector<pair<int,int>>vp;
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
typedef unordered_map<long long, long long> umll;
typedef map<long long ,long long>mll;
# define N 1000000
bool isPrime[N];
set<int>st;
void seive()
{
    for(int i = 0; i <= N;++i) {
            isPrime[i] = true;
        }
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i * i <= N; ++i) {
             if(isPrime[i] == true) {                    
                 for(int j = i * i; j <= N ;j += i)
                     isPrime[j] = false;
            }
        }
for(int i=2;i<N+1;i++)
   {
	   if(isPrime[i]==true)
	   {
		  st.insert(i);
	   }
   }
}
void solve(){
   int n,m;cin>>n>>m;
   int arr[n][m];
   int mn=INT_MAX,sum=0,mn2=INT_MAX;
   forf(int,i,n)
   {sum=0;
       forf(int,j,m)
       {
           cin>>arr[i][j];
        int p=arr[i][j];
        
        if(isPrime[p]==true){arr[i][j]=0; }
         else{
            auto it=st.upper_bound(p);
            // cout<<p<<" "<<*it<<"--- ";
            arr[i][j]=(*it)-p;
           
         }
         sum+=arr[i][j];
      
       }
       mn=min(sum,mn);
   } 

   forf(int,i,m)
   {sum=0;
       forf(int,j,n)
       {
          
          sum+=arr[j][i];
       }
       mn2=min(sum,mn2);
   }
 
cout<<min(mn,mn2)<<endl;
}

int main(){
    
   seive();
    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}