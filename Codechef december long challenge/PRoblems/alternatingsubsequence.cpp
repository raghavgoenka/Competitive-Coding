//https://codeforces.com/contest/1343/problem/C
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
void solve(){
   int n;cin>>n;
   ll arr[n];
   forf(int,i,n){cin>>arr[i];}
   ll sum=0,ch=-999999999999999,sign=0;
   if(arr[0]>0){sign=1;}
   forf(int,i,n)
   {
       if(sign==0)
       { if(arr[i]<0)
             {ch=max(ch,arr[i]);}
        else{
            if(ch!=-999999999999999){
            sum+=ch;}

            sign=1;
            ch=arr[i];
        }
       }
       else if(sign==1)
       {
           if(arr[i]>0){ch=max(ch,arr[i]);}
           else{
                if(ch!=-999999999999999){
            sum+=ch;}
               ch=arr[i];
               sign=0;
           }
       }
      
   
   }

cout<<sum+ch<<endl;


}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}