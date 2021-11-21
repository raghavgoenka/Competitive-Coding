//https://codeforces.com/contest/1598/problem/B
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
   int n;cin>>n;
    int a[n][5];
    int c[5]={0,0,0,0,0};
    F(i,0,n-1)
    {
        for(int j=0;j<5;j++){
            int p;cin>>p;
            a[i][j]=p;
            if(p==1)c[j]++;
        }
    }
    
    int res=n/2;
    int visited[n];
    for(int i=0;i<4;i++)
    {
          if(c[i]>=res)
          {
              for(int j=i+1;j<5;j++)
              {   int count=0,flag=0;
                  if(c[j]<res){continue;}
                  for(int p=0;p<n;p++)
                  {

                      if(a[p][j]==1){count++;visited[p]=1;}
                      if(a[p][i]==1){visited[p]=1;}

                     
                  
                  }
                  for(int z=0;z<n;z++){if(visited[z]==1){flag++;}}
                
                  if(flag==n&&count>=res&&c[i]>=res)
                  {  
                         cout<<"YES"<<endl;return ;
                        }
                  
              }
          }
    }
cout<<"NO"<<endl; 
}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}