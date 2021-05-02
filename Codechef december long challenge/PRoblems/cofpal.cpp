//https://codeforces.com/contest/1504/problem/A
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
   string s;cin>>s;
   int n=s.length();
   int i=0,j=n-1,c=0;
   forf(int,i,n){if(s[i]=='a'){c++;}}
   if(c==n){cout<<"NO"<<endl;return;}
   if(n==1&&s[0]!='a'){s='a'+s[0];cout<<s<<endl;return;}
   if(n==2)
   {
       if(s[0]==s[1]){s='a'+s;cout<<"YES"<<endl;cout<<s<<endl;return;}
       else{
           if(s[0]=='a'){s='a'+s;cout<<"YES"<<endl;cout<<s<<endl;return;}
           else{s=s+'a';cout<<"YES"<<endl;cout<<s<<endl;return;}
       }
   }
   while(j>i)
   {
          if(s[i]!=s[j]){
              if(s[i]=='a'){s='a'+s;cout<<"YES"<<endl;cout<<s<<endl;return;}
              else {s=s+'a';cout<<"YES"<<endl;cout<<s<<endl;return;}
          }
          else{
              s='a'+s;cout<<"YES"<<endl;cout<<s<<endl;return;
          }
   }


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