//https://codeforces.com/contest/1562/problem/B
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
typedef map<char ,int>mll;

void solve(){
   int n;cin>>n;
   string s;cin>>s;
  mll mp;
   forf(int,i,n)
   {
       if(s[i]!='2'&&s[i]!='5'&&s[i]!='3'&&s[i]!='7'){cout<<"1"<<endl<<s[i]<<endl;return;}
   }
   if(n==2){cout<<n<<endl<<s<<endl;return;}
   forf(int,i,n){mp[s[i]]++;}
   if(mp['2']>=2){cout<<"2"<<endl<<"22"<<endl;return;}
   else if(mp['5']>=2){cout<<"2"<<endl<<"55"<<endl;return;}
   else if(mp['3']>=2){cout<<"2"<<endl<<"33"<<endl;return;}
   else if(mp['7']>=2){cout<<"2"<<endl<<"77"<<endl;return;}
   
   if(n==4){cout<<"2"<<endl;
   if(s[0]=='2'){cout<<"25"<<endl;}
   else if(s[0]=='5'){cout<<"52"<<endl;}
   else if(s[0]=='3'){cout<<"35"<<endl;}
   else if(s[0]=='7'){cout<<"75"<<endl;}
   return;

   }
   
   if(n==3)
   {
       if(s[0]=='2'&&(mp['5']>0||mp['7']>0)){
       cout<<"2"<<endl;
       if(mp['5']>0){cout<<"25"<<endl;return;}
       else{cout<<"27"<<endl;return;}
       }
       else if(s[0]=='5'&&(mp['2']>0||mp['7']>0)){cout<<"2"<<endl;
        if(mp['2']>0){cout<<"52"<<endl;return;}
        else{cout<<"57"<<endl;return;}
       }
       else if(s[0]=='7'&&(mp['2']>0||mp['5']>0)){cout<<"2"<<endl;
        if(mp['2']>0){cout<<"72"<<endl;return;}
        else{cout<<"75"<<endl;return;}
       }
       else if(s[0]=='3'&&mp['5']>0||mp['2']>0){cout<<"2"<<endl;
        if(mp['5']>0){cout<<"35"<<endl;return;}
        else{cout<<"32"<<endl;return;}
       }
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