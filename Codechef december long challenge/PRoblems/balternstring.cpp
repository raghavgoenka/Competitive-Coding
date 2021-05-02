//https://codeforces.com/contest/1102/problem/D
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
   int n;cin>>n;
   string s;cin>>s;
   int k=n/3,zero=0,one=0,two=0;
   forf(int,i,n){if(s[i]=='0'){zero++;}else if(s[i]=='1'){one++;}else{two++;}}
   if(zero<k)
   { 
      
      for(int i=0;i<n && zero!=k;i++)
      {  
          if(s[i]=='2'&&two>k)
          {
              s[i]='0';
              two--;
              zero++;
          }
          else if(s[i]=='1'&& one>k)
          {
              s[i]='0';one--;zero++;
          }

          if(zero==k){break;}
      }
      
      

   }
   
   if(two<k)
   {   
       
       for(int i=n-1;i>=0&&two!=k&&(one>k);i--)
       {
           if(s[i]=='1'){s[i]='2';two++;one--;;}
       }
       for(int i=n-1;i>=0&&two!=k&&(zero>k);i--)
       {
           if(s[i]=='0'){s[i]='2';two++;zero--;}
       }
   }
   if(one<k)
   {
       
       
       
           for(int i=0;i<n&&one!=k&&(two>k);i++)
           {
               if(s[i]=='2'){s[i]='1';one++;two--;}
           }
           
           for(int i=n-1;i>=0&&one!=k&&(zero>k);i--)
           {
               if(s[i]=='0'){s[i]='1';one++;zero--;}
               
           }
       
   }
   cout<<s<<endl;
}

int main(){
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}