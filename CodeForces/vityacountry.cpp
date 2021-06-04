//https://codeforces.com/contest/719/problem/A
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
typedef map<long long ,long long>mll;
int arr[30];
void solve(){
   forf(int,i,16){arr[i]=i;}
   int j=14;
   for(int i=16;i<30;i++){arr[i]=j;j--;}
   int k;cin>>k;
   int a[k];forf(int,i,k){cin>>a[i];}
   if(k==1&&a[0]!=0){if(a[0]==15){cout<<"DOWN"<<endl;return;}cout<<"-1"<<endl;return;}
  j=0;
  int i=1;
  if(k>30){i=((k/30)*30);i+=1;}


      for(int p=0;p<30;)
      {   
          
          if(arr[p]==a[i-1]){i++;
          if(i>k){j=p+1;break;}
          }
          else{if(k>30){i=((k/30)*30);i+=1;}else{i=1;}}
          p++;

           if(p>=30){p=p%30;}
          
      }
 
 
  if(arr[j]>arr[j-1]){cout<<"UP"<<endl;}
  else{cout<<"DOWN"<<endl;}

}

int main(){
    

    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}