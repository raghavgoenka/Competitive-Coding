//https://www.codechef.com/PRACTICE/problems/CHEFPRMS
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

 bool isPrime[200+1];
 vi v;
 set<int> st;
 void prime(){
        for(int i = 0; i <= 200;++i) {
            isPrime[i] = true;
        }
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i * i <= 200; ++i) {
             if(isPrime[i] == true) {                    
                 for(int j = i * i; j <= 200 ;j += i)
                     isPrime[j] = false;
            }
        }
		int count=0;
	for(int i=2;i<200+1;i++)
   {
	   if(isPrime[i]==true)
	   {
		  v.pb(i);
	   }
   }
   forf(int,i,5)
   {
       for(int j=i+1;j<v.size();j++)
       {
           if(v[i]*v[j]<=200){st.insert(v[i]*v[j]);}
           else{break;}
       }
   }
 } 
void solve(){
   int n;cin>>n;
   
    for (auto it=st.begin(); it != st.end(); ++it)
       {
            
           
               int p=n-*it;
               int p1=n-p;
              
               if(p<=0 || p1<=0){break;}
               if(st.find(p)!=st.end()&&st.find(p1)!=st.end()){cout<<"YES"<<endl;return;}
               else{continue;}
             
       }
    cout<<"NO"<<endl;   
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