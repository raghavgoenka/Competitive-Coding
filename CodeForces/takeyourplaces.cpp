//https://codeforces.com/contest/1556/problem/B
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
#define F(i,a,b) for(int i = (int)(a); i <= (int)(b); i++)
#define RF(i,a,b) for(int i = (int)(a); i >= (int)(b); i--)

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
void solve(){
   int n;cin>>n;
   vll arr,odd_pos,even_pos;
  int odd_count=0,even_count=0;
   forf(int,i,n){
       ll p;cin>>p;
       arr.pb(p);
      
       if(arr[i]%2==0) {even_pos.pb(i);even_count++;}
       else{ odd_pos.pb(i);odd_count++;}   
    }

   
    
    if(n==1) {cout<<"0"<<endl;return;}

    if(abs(odd_count-even_count)>1) {cout<<"-1"<<endl;return;} // in even n odd==even and in odd n even+1 =odd || odd+1 =even, so diff>2 is impossible
int res=0,res1=0,idx=0;
    if(odd_count==even_count&& n%2==0){
        

        for(int i=0;i<n;i++){
             if(i%2==0){
            res+=abs(i-even_pos[idx]);
            idx++;
        }
        }
        int d=0;
        for(int i=0;i<n;i++){
             if(i%2==0){
            res1+=abs(i-odd_pos[d]);
            d++;
        }
        }

            res=min(res,res1);
    }
    else if(odd_count<even_count&& n%2==1){
       for(int i=0;i<n;i++){
             if(i%2==0){
            res+=abs(i-even_pos[idx]);
            idx++;
        }
        } 

    }
    else if(odd_count>even_count&& n%2==1){
       
         for(int i=0;i<n;i++){
             if(i%2==0){
            res+=abs(i-odd_pos[idx]);
            idx++;
        }
        }
    }
    cout<<res<<endl;

}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}