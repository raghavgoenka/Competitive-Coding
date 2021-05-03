//https://www.hackerearth.com/challenges/competitive/april-circuits-21/algorithm/divide-array-3-10ef1aae/
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
   int arr[n],aux[n],front[n-1],end[n-1];
   umll mp1,mp2;
   forf(int,i,n){cin>>arr[i];aux[i]=arr[i];mp1[arr[i]]++;mp2[arr[i]]++;}
   if(n==1){
       if(arr[0]>0){cout<<"0"<<endl;return;}
       else if(arr[0]==0){cout<<"1"<<endl;return;}
   }
    sort(aux,aux+n);
 
 ll missing=0,mm=0;
 
 
int temp=aux[0],flag=0;
if(temp>=1){missing=0;mm=0;}
else{
for(int i=1;i<n;i++)
{   
    if(aux[i]==temp){continue;}
    else if(aux[i]==temp+1){temp=temp+1;continue;}
    else if(aux[i]!=temp+1){missing =temp+1;mm=temp+1;flag=1;break;}
}
 
if(flag==0){missing=aux[n-1]+1;mm=aux[n-1]+1;}
}
mm=missing;
 
if(arr[0]>0){front[0]=0;}
else if(arr[0]==0){front[0]=1;}
 mp1[arr[n-1]]--;
 if(mp1[arr[n-1]]==0){ll num=arr[n-1];front[n-2]=min(missing,num);missing=min(num,missing);}
 else if(mp1[arr[n-1]]>0){front[n-2]=missing;}
 
 for(int i=n-2;i>0;i--)
 {    mp1[arr[i]]--;
     if(mp1[arr[i]]>0){front[i-1]=missing;}
     else if(mp1[arr[i]]==0){ll num=arr[i];front[i-1]=min(num,missing);missing=min(num,missing);}
 }
 
if(arr[n-1]>0){end[n-1]=0;}
else if(arr[n-1]==0){end[n-1]=1;}
mp2[arr[0]]--;
if(mp2[arr[0]]==0){ll num=arr[0];end[0]=min(num,mm);mm=min(num,mm);}
 else if(mp2[arr[0]]>0){end[0]=mm;}
 
 for(int i=1;i<n-1;i++)
 {    mp2[arr[i]]--;
     if(mp2[arr[i]]>0){end[i]=mm;}
     else if(mp2[arr[i]]==0){ll num=arr[i];end[i]=min(num,mm);mm=min(num,mm);}
 }
//  forf(int,i,n-1){cout<<front[i]<<" "<<end[i]<<endl;}
    forf(int,i,n-1){if(front[i]==end[i]){cout<<i+1<<endl;return;}}
    cout<<"-1"<<endl;
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