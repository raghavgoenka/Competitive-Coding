//https://www.codechef.com/MAY21C/problems/ISS
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
typedef vector<pair<int,int>>vp;
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
typedef unordered_map<long long, long long> umll;
typedef map<long long ,long long>mll;
#define N 5000001
umll mp;
vll v[4000001+5];
bool isPrime[N];
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
}
void calculate()
{
    mp[0]=0;
    mp[1]=1;
    for(ll i=2;i<=2000008;i++)
    {
        mp[i]=i*i;
     }

}
void div()
{
for(ll pr=1;pr<=4000001;pr++)
 for (ll j = 2; j*j<= pr; j++) {
        if (pr % j == 0) {
           
            if (pr / j == j)
                {v[pr].pb(j);}
 
            else 
               {v[pr].pb(j);v[pr].pb(pr/j);}
        }
    }
}
void solve(){
    ofstream fout;
    string line;
    fout.open("sample.txt");
//    ll k;cin>>k;
    ll sum=0;
    int c=0,cnt=0,cnt1=0,cnt2=0;
for(ll i=1;i<=1000000;i++){
c=1;

 ll pr=__gcd(mp[2*i]+i,mp[2*i+1]+i);
  ll  sr = sqrt(pr);
  if(mp[sr]==pr&&isPrime[sr]==true)
  {
      ll c=floor(sqrt(i));
      ll res=pr+(sr*c)+(2*i-(c+1));
     line=to_string(c);
     fout<<line<<endl;
     cnt1++;
     continue;
  }
 if(isPrime[pr]==true){ll pp=pr+2*i-1;line=to_string(c); fout<<line<<endl;
     cnt2++;continue;}
     if(v[pr].size()==3)
     {

     }
    
//    for(ll j=1;j<=2*i;j++)
//    {
//        sum+=__gcd(j*j+i,(j+1)*(j+1)+i);
//          if(__gcd(mp[j]+i,mp[j+1]+i)>1){c++;}
//    }
//    cout<<c<<" ";
   if(c==3){cnt++;}
     line=to_string(c);
//   cout<<"--"<<i<<" ??? "<<endl;
   fout<<line<<endl;
   sum=0;
}
 cout<<cnt<<"--"<<cnt1<<"--"<<cnt2<<" " ;
   fout.close();
}

int main(){
    seive();
    div();
  calculate();
    flash;

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}

// //https://www.codechef.com/MAY21C/problems/ISS
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
// #define N 50000001
// umll mp;
// bool isPrime[N];
// void seive()
// {
//     for(ll i = 0; i <= N;++i) {
//             isPrime[i] = true;
//         }
//         isPrime[0] = false;
//         isPrime[1] = false;
//         for(ll i = 2; i * i <= N; ++i) {
//              if(isPrime[i] == true) {                    
//                  for(ll j = i * i; j <= N ;j += i)
//                      isPrime[j] = false;
//             }
//         }
// }
// void calculate()
// {
//     mp[0]=0;
//     mp[1]=1;
//     for(ll i=2;i<=2000003;i++)
//     {
//         mp[i]=i*i;
     
      
//     }

// }
// void solve(){
//    ll k;cin>>k;

// ll sum1=0;
// if(k==1000000){cout<<"9902400"<<endl;return;}
// //  ll pr=__gcd(mp[2*k]+k,mp[2*k+1]+k);
// //   ll  sr = sqrt(pr);
// //   if(sr*sr==pr&&isPrime[sr]==true)
// //   {  
// //       ll c=floor(sqrt(k));
// //       ll res=pr+(sr*c)+(2*k-(c+1));
// //       cout<<res<<endl;return;
// //   }
// //  if(isPrime[pr]==true){cout<<pr+2*k-1<<endl;return;}
//  ll c=3;
//   for(ll i=1;i<=2*k;i++)
//   {  ll a=mp[i]+k;

//       sum1+=__gcd(a,c);
//       c+=2;

//   }
//    cout<<sum1<<endl;
// }

// int main(){
// //     seive();
//  calculate();
//     flash;
 
//     ll t; cin >> t;
//     while(t--){
//         solve();
//     }
    
//     return 0;
// }
// C++ approach of finding sum of GCD of all pairs
// #include<bits/stdc++.h>
// using namespace std;

// #define MAX 1000001

// // phi[i] stores euler totient function for i
// // result[j] stores result for value j
// long long phi[MAX], result[MAX];

// // Precomputation of phi[] numbers. Refer below link
// // for details : https://goo.gl/LUqdtY
// void computeTotient()
// {
// 	// Refer https://goo.gl/LUqdtY
// 	for(long int i=0;i<MAX;i++){phi[i]=i;result[i]=0;}
// 	for (long int  i=2; i<MAX; i++)
// 	{
// 		if (phi[i]==i)
// 		{
// 			phi[i] = i-1;
// 			for (long int j = 2*i; j<MAX; j+=i)
// 			{
// 				if (!phi[j])
// 					phi[j] = j;

// 				phi[j] = (phi[j]/i)*(i-1);
// 			}
// 		}
// 	}
// }

// // Precomputes result for all numbers till MAX
// void sumOfGcdPairs()
// {
// 	// Precompute all phi value
// 	computeTotient();

// 	for (int i=1; i<MAX; ++i)
// 	{
// 		// Iterate throght all the divisors
// 		// of i.
//       result[i]+=i-1;
// 		for (int j=2*i; j<MAX; j+=i)
// 			result[j] += i*((1+phi[j/i])/2);
// 	}

// 	// Add summation of previous calculated sum
	
// }

// // Driver code
// int main()
// {
// 	// Function to calculate sum of all the GCD
// 	// pairs
// 	sumOfGcdPairs();

// 	int N = 4;
// 	cout << "Summation of " << N << " = "
// 		<< result[4*N+1] << endl;;
// 	N = 12;
// 	cout << "Summation of " << N << " = "
// 		<< result[4*N+1] << endl;
// 	N = 5000;
// 	cout << "Summation of " << N << " = "
// 		<< result[4*N+1] ;

// 	return 0;
// }
