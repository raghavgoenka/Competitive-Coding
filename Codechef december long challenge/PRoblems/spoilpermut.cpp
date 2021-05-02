//https://codeforces.com/contest/56/problem/B
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
  vi a(n),b(n);
	int pos1=-1,pos2=-1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b.begin(),b.end());
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			pos1=i;
			break;
		}
	}
	for(int i=n-1;i>=0;i--){
		if(a[i]!=b[i]){
			pos2=i;
			break;
		}
	}
	int f=1;
	if(pos1==pos2){cout<<"0 0"<<endl; return ;}
	reverse(a.begin()+pos1,a.begin()+pos2+1);
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]) f=0;
	}
	if(f==0){
		cout<<"0 0 "<<endl;
	}
	else{
		cout<<pos1+1<<" "<<pos2+1<<endl;
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