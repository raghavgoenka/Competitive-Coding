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
 
   int n;
   cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
   
    int count=0;
    for(int i=0;i<n-1;i++)
    {  
        auto itr = find(arr, arr + n, i+1);
         int index=distance(arr,itr);
       
         if(index+1!=i+1)
         {
             count+=(index+1)-(i+1)+1;
          int j=i;
          
          while(j<index)
          { 
              swap(arr[j],arr[index]);
            j++;index--;
          }
          
         }
         else{count++;}
    
    
    }
   
    cout<<"Case #"<<t<<": "<<count<<"\n";
  
  
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