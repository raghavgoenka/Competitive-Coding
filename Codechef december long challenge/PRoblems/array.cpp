//https://codeforces.com/contest/300/problem/A
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
   int arr[n],neg=0,pos=0,zero=0;
   forf(int,i,n){cin>>arr[i];if(arr[i]<0){neg++;}else if(arr[i]>0){pos++;}else{zero++;}}
  
   sort(arr,arr+n);
   
   cout<<"1"<<" "<<arr[0]<<endl;
   neg--;
   if(neg%2==0)
   {  if(neg==0){cout<<"1"<<" "<<arr[n-1]<<endl;
            cout<<n-2<<" ";
            for(int i=1;i<n-1;i++){cout<<arr[i];}
       
         }
      
      else{ cout<<neg<<" ";
       int i=1;
       while(arr[i]!=0)
       {
           cout<<arr[i]<<" ";
           i++;
       }
       cout<<endl;
       cout<<n-i<<" ";
       for(int p=i;p<n;p++){cout<<arr[p]<<" ";}
       cout<<endl;
      }
       
   }
   else{
       if(neg==1){cout<<"1"<<" "<<arr[n-1]<<endl;
       
       cout<<n-2<<" ";
       while(neg<n-1){cout<<arr[neg]<<" ";neg++;}
       cout<<endl;
       }
       else{int i=1;
       cout<<neg-1<<" ";
       while(i<neg){cout<<arr[i]<<" ";i++;}
       cout<<endl;
       cout<<n-neg<<" ";
       while(i<n){cout<<arr[i]<<" ";i++;}
       cout<<endl;
       }
   }
   
  
   


}

int main(){
    

    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}