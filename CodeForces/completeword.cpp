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
   int n=s.length();
   
   if(n<26){cout<<"-1"<<endl;return;}
  
   int v[26]={0};
   
   int i=0,j=1;
   
   v[s[i]-'A']=1;
 
   
   while(i<=(n-26)&&j<n)
   {
       if( v[s[j]-'A']==0 || s[j]=='?')
       {
           if(s[j]!='?'){v[s[j]-'A']=j+1;} 
           if(j-i==25){break;}
           j++;
           
       }

       else if(v[s[j]-'A']>0)
       {
         i=v[s[j]-'A'];
       
        if(n-i<25){break;}
         for(int x=0;x<i;x++){v[s[x]-'A']=0;}
        
          
 }
   
    
     
   }

  
  if((j-i)<25){cout<<"-1"<<endl;return;}
  for(int a=i;a<=j;a++){if(s[a]!='?'){v[s[a]-'A']++;}}
   for(int a=i;a<=j;a++)
   {
       if(s[a]=='?')
       {
           for(int j=0;j<26;j++){if(v[j]==0){s[a]=char(j+65);v[j]=1;break;}}
       }
      
   }
   for(int i=0;i<n;i++){if(s[i]=='?'){s[i]='A';}}
   cout<<s<<" ";
}

int main(){
    

    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}