//https://codeforces.com/contest/1512/problem/C
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
   int a,b;cin>>a>>b;
   string s;cin>>s;
   string p=s;
   int n=s.size();
   int zero=0,one=0,ques=0;
   forf(int,i,n){if(s[i]=='1'){one++;}else if(s[i]=='0'){zero++;}else{ques++;}}
   
   if(zero>a||one>b){cout<<"-1"<<endl;return;}
   if(n==1)
   {if(s[0]=='0'&&a>0){cout<<s<<endl;return;}
   else if(s[0]=='1'&&b>0){cout<<s<<endl;return;}
   else if(s[0]=='?'&&(a>0||b>0))
   {if(a>0){cout<<"0"<<endl;return;}else{cout<<"1"<<endl;return;}}
   else{cout<<"-1"<<endl;return;}}

   if(ques==0)
   {
       reverse(p.begin(), p.end());
       if(p!=s){cout<<"-1"<<endl;return;}
       
   }
   int i = 0,j=n-1;
  
    a=a-zero;b=b-one;
    
    while (j > i)
    {   if(s[i]==s[j]){
        if(s[i]=='?'&&s[j]=='?'&&(a>=2||b>=2))
        {  char c;
            if(a>=b){c='0';a-=2;} else{c='1';b-=2;}
           
            
           s[i]=c;s[j]=c;
           ques-=2;
            if(a<=0&&b<=0){break;}
        }
       }

        else
        {
        //    if(s[i]!=s[j]&&(s[i]!='?')&&s[j]!='?'){cout<<"-1"<<endl ;return;}

            if(s[i]=='?'||s[j]=='?'){
                char c;
                if(s[i]!='?')
                {c=s[i];}
                else{
                 c=s[j];
                } 
               if(c=='0'){if(a<=0){cout<<"-1"<<endl; return;}}
                else if(c=='1'){if(b<=0){cout<<"-1"<<endl; return;}}
                s[i]=c;s[j]=c;
                if(c=='1'){b--;}else{a--;}
                ques--;
                if(a<=0&&b<=0){break;}
            }
          
        }
          i++;j--;
    }
    if(n%2!=0)
    {  
           if(s[n/2]=='?'){
               if(a>0){s[n/2]='0';}
               else if(b>0){s[n/2]='1';}
               else{cout<<"-1"<<endl;return;}
               ques--;
           }
    }
    
    p=s;
    reverse(p.begin(), p.end());
    if(p==s&&ques==0){
    cout<<s<<endl;}
    else{cout<<"-1"<<endl;}

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