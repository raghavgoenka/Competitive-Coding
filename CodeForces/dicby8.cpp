//https://codeforces.com/contest/550/problem/C
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
   string s;cin>>s;
   int res=-1,a,b,c;
   
  
   
   for(int i=0;i<s.size();i++){  if(s[i]=='0'||s[i]=='8'){cout<<"YES"<<endl<<s[i]-'0'<<endl;return;}}
   if(s.size()==1){cout<<"NO"<<endl;return;}
   if(s.size()==2){
       int t=(s[0]-'0')*10;
       t+=s[1]-'0';
       if(t%8==0){cout<<"YES"<<endl<<t<<endl;return;}
       else{cout<<"NO"<<endl;return;}
   }
   for(int i=0;i<s.size()-2&&s.size()>=3;i++){
     
       for(int j=i+1;j<s.size()-1;j++){
           int p=(s[i]-'0')*100;
           p+=(s[j]-'0')*10;
           a=(s[i]-'0')*10;
           
           a+=(s[j]-'0');
           b=(s[j]-'0')*10;
           c=(s[i]-'0')*10;
         
             if(a%8==0){res=a;break;}
           for(int k=j+1;k<s.size();k++){
               p+=(s[k]-'0');
               b+=(s[k]-'0');
               c+=s[k]-'0';
             
             
               if(b%8==0){res=b;break;}
               if(c%8==0){res=c;break;}
               if(p%8==0){res=p;break;}
               p-=(s[k]-'0');
               b-=(s[k]-'0');
               c-=s[k]-'0';
           }

           p-=(s[j]-'0')*10;
           a-=(s[j]-'0');

       }
   }
   res==-1 ?cout<<"NO"<<endl:cout<<"YES"<<endl<<res<<endl;
}

int main(){
    

    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}