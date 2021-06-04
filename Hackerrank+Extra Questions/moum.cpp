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

void solve(ll t){
 
  int x,y ; cin>>x>>y;
  char res;
  if(x>y){res='J';}
  else{res='C';}
  string s;cin>>s;
  int n=s.size();
  int cost=0,c_count=0,j_count=0;
  for(int i=0;i<n-1;i++)
  {
      if(s[i]=='?'){s[i]=s[i+1];}
      else if(s[i]=='C'){c_count++;}
      else{j_count++;}
      
  }
  if( j_count >0 && c_count==0 || c_count>0 && j_count==0){cost=0;}
  else{

            for(int i=0;i<n-1;i++)
            {
                
                if(s[i]=='?'&& s[i+1]=='?'){s[i]='C';}
                else if(s[i]=='?'){s[i]=s[i+1];}
            }

}
cout<<s;
    for(int i=0;i<n-1;i++)
            {
                if(s[i]=='C'&& s[i+1]=='J'){cost+=x;}
                else if( s[i]=='J' && s[i+1]=='C'){cost+=y;}
                
            }
    cout<<"Case #"<<t<<": "<<cost<<"\n";
  
  
}

int main(){
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t; cin >> t;
    ll i=1;
    while(i<=t){
        solve(i);
        i++;
    }
    
    return 0;
}