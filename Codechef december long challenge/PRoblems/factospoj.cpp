//https://www.spoj.com/problems/FACT0/
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
 
void primefactor(ull a)
{ 
     ull count=0,k=1,p=2;
        while (a % p == 0) {
       
        a /= p;
        k=0;
        count++;
    }
    if(k==0){printf("2^%lld ",count);}
    // cout<<"2"<<"^"<<count<<" ";
    
    count=0;
    for (ull d = 3; d * d <= a; d += 2) {
      count=0;
      if(a%d==0){
        while (a % d == 0) {
           
            a /= d;
            count++;
        }
 
         printf("%lld ^ %lld ",d,count) ;
        }
    }
    if(a>1){cout<<a<<"^"<<"1 ";}
    
  printf("\n");
}
void solve(ull t){
     primefactor(t);
   
    
}

int main(){
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ull t; cin >> t;
    while(t!=0){
        solve(t);
       scanf("%lld",&t);
    }
    
    return 0;
}