//https://codeforces.com/contest/1351/problem/C
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
typedef map<string,int>ml;
void solve(){
    ml mp;
    mp["NN"]=5;
    mp["SS"]=5;
    mp["EE"]=5;
    mp["WW"]=5;
    mp["NS"]=1;
    mp["SN"]=1;
    mp["WE"]=1;
    mp["EW"]=1;
    mp["WN"]=5;
    mp["NW"]=5;
    mp["EN"]=5;
    mp["NE"]=5;
    mp["SW"]=5;
    mp["WS"]=5;
    mp["SE"]=5;
    mp["ES"]=5;
   string s;cin>>s;
   int n=s.length();
   char p=s[0];
   ll count=5;
  
   string tm="";
  
   tm+=s[0];
   tm+=s[1];
  
count+=mp[tm];
cout<<count;
tm="";
int c=0;

   int i=2;
   while(s.length()>2)
   {  
        tm+=s[i-1];
        tm+=s[i];
        count+=mp[tm];
        if(s[i-1]!=s[i]){mp[tm]=1;}
         s.erase(i-1, 2);
         tm="";
      
       i=1;
       c++;
   }
   cout<<s;
   if(c!=0 && s.length()>1){count+=5;}
   cout<<count<<endl;

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