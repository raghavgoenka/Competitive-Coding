//https://www.spoj.com/problems/PPATH/
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
typedef queue<long int>qp;
typedef unordered_map<long long, long long> umll;
#define N 9999

vll v[1000001];
int visited[1000001]={0},dis[1000001]={0};
bool isPrime[N+1];
vi primestore;
bool check(int p1,int p2)
{
    int num_digit_diff=0;
    while(p1>0)
    {
        if(p1%10!=p2%10){num_digit_diff++;}
        p1/=10;p2/=10;
    }
   if(num_digit_diff==1){return true;}
   else{return false;}
}
void seive()
{
 for(int i = 0; i <= N;++i) {
            isPrime[i] = true;
        }
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i * i <= N; ++i) {
             if(isPrime[i] == true) {                    
                 for(int j = i * i; j <= N ;j += i)
                     isPrime[j] = false;
            }
        }
		int count=0;
	for(int i=1000;i<=N;i++)
   {
	   if(isPrime[i]==true)
	   {
		   primestore.pb(i);
	   }
   }
   int ss=primestore.size();
  
 forf(int,i,ss)
 {
     for(int j=i+1;j<ss;j++)
     {
         int a=primestore[i],b=primestore[j];
         if(check(a,b))
         {
              v[a].pb(b);
              v[b].pb(a);
         }
     }
 }

}
void bfs(ll src)
{
   qp q;
   q.push(src);
   visited[src]=1;
   dis[src]=0;
   while(!q.empty())
   {
       int current=q.front();
       q.pop();
       for(int child:v[current])
       { if(visited[child]!=1)
          { q.push(child);
            
           dis[child]=dis[current]+1;
           visited[child]=1;
       }}
   }
return;
}
void solve(){
  int a,b;cin>>a>>b;
  for(int i=1000;i<N+1;i++){visited[i]=0;dis[i]=-1;}

  
   
     bfs(a);//from first node to nth node (shortest path)!!
     
  
  if(dis[b]==-1){cout<<"impossible"<<endl;}
  else{cout<<dis[b]<<endl;}

}

int main(){
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    seive();
    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}