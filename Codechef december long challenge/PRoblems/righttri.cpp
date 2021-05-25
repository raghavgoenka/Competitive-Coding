// #include <bits/stdc++.h>
// #define flash ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

// #define pb push_back
// #define eb emplace_back
// #define ff first
// #define ss second
// #define endl "\n"
// #define EPS 1e-9
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define forf(t,i,n) for(t i=0;i<n;i++)
// #define forr(t,i,n) for(t i=n-1;i>=0;i--)
// #define print(x) for(const auto &e: (x)) { cout<<e<<" "; } cout<<endl
// #define F(i,a,b) for(int i = (int)(a); i <= (int)(b); i++)
// #define RF(i,a,b) for(int i = (int)(a); i >= (int)(b); i--)

// using namespace std;

// typedef long long int ll;
// typedef unsigned long long ull;
// typedef long double ld;
// typedef vector<int> vi;
// typedef vector<long> vl;
// typedef vector<long long> vll;
// typedef vector<vector<int>> vvi;
// typedef vector<pair<int,int>>vp;
// typedef vector<vector<long long>> vvll;
// typedef vector<string> vs;
// typedef unordered_map<long long, long long> umll;
// typedef map<long long ,long long>mll;
// set<ll>s;
// void sumsquare()
// {
//    for(ll i=1;i<=1000000;i++)
//    {
//        s.insert(i*i);
//    }
// }
// void solve(){
//    ll x;cin>>x;
//    ll count=0,div_pair=0,even_pair=0,odd_pair=0,sq_pair=0;
//    if(x==1||x==2){cout<<"0"<<endl;return;}
//    if(x==3||x==4){cout<<"1"<<endl;return;}
//    if(x==5){cout<<"2"<<endl;return;}
//    if(x%2==0)
//    {
//        ll c=x/2;
//          div_pair=1;
//        for(ll i=2;i*i<=c;i++)
//        {  ll p=c/i;
//            if(c%i==0&&((c/i)!=i)){div_pair++;
//              }
//        }
//        for(ll i=2;i*i<=x;i++)
//        {  ll p=x/i;
//            if(x%i==0&&((x/i)!=i)){
//            if(i%2==0&&(p)%2==0){even_pair++;}
           
//            }
//        }
//        for (ll i = 1; i * i <= x; ++i) {
//          set<ll> z;
// 		ll c=x-(i*i);
// 		if (s.find(c) != s.end()&&c!=(i*i)&&z.find(c)==z.end()&&z.find(i*i)==z.end()) {
// 		  sq_pair++;
//         }

// 	   }
//     //    cout<<div_pair<<"--"<<even_pair<<"--"<<sq_pair<<" ";
//        count+=div_pair+even_pair+sq_pair;
//        cout<<count<<endl;return;
//    }
//    else
//    {   div_pair=1;
//          for(ll i=2;i*i<=x;i++)
//        {
//            if(x%i==0&&((x/i)!=i)){div_pair++;
//            if(i%2==0&&(x/i)%2==0){even_pair++;}
//            else if(i%2!=0&&(x/i)%2!=0){odd_pair++;}}
//        }
//        for (ll i = 1; i * i <= x; ++i) {

// 		  set<ll> z;
// 		ll c=x-(i*i);
// 		if (s.find(c) != s.end()&&c!=(i*i)&&z.find(c)==z.end()&&z.find(i*i)==z.end()) {
// 		  sq_pair++;
//         }

// 	   }
//        count+=div_pair+sq_pair;
//        cout<<count<<endl;return;
//    }
// }

// int main(){
    
//    sumsquare();
//     flash;

//     ll t; cin >> t;
//     while(t--){
//         solve();
//     }
    
//     return 0;
// }
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
void solve()
{
   ll x;cin>>x;
   ll count=0;
   if(x==1||x==2){cout<<"0"<<endl;return;}
   if(x==3||x==4){cout<<"1"<<endl;return;}
   if(x==5){cout<<"2"<<endl;return;}

   for(ll i=1;i<=100000;i++)
   {
       for(ll j=i+1;j<=10000;j++)
       {
           if(i*i+j*j==(x*x)){count++;cout<<i*i<<"--"<<j*j<<"--"<<x*x<<endl;}
           if((j*j-i*i)==(x*x)){count++;cout<<i*i<<"--"<<x*x<<"--"<<j*j<<endl;}
       }
   }
   cout<<endl;
   cout<<count<<endl;
}

int main(){
    
 
    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}
