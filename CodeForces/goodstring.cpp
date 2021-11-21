//https://codeforces.com/contest/1165/problem/C
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
typedef map<char,long long>mll;
void solve(){
   int n;cin>>n;
   string s;cin>>s;
   int c=0;
   mll mp;
   forf(int ,i,n){mp[s[i]]++;}
   if(mp.size()==1){cout<<n<<endl<<" "<<endl;return;}
   string temp="";
   int flag=0,j=-1;
   forf(int,i,s.size())
   {
  
       if(flag==0)
       {
         temp+=s[i];j++;
         flag=1;
       }
       else{
          if(temp[j]!=s[i]){temp+=s[i];j++;}
          else{continue;}
          flag=0;
       }
    }
 
   if(temp.size()%2!=0){cout<<1+(n-temp.size())<<endl;temp.erase(temp.size()-1,1);}
   
   else{cout<<n-temp.size()<<endl;}
   cout<<temp<<endl;
}

int main(){
    

    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}