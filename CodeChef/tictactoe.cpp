//https://www.codechef.com/MAY21B/problems/TCTCTOE
#include <bits/stdc++.h>
#define flash ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define pb push_back
#define eb emplace_back
#define ff first
#define it insert
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
int mx=0,my=0;
 int winPos[8][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};
  int gamestate[9] = {2, 2, 2, 2, 2, 2, 2, 2, 2};
 

void winning()
{
 for (auto win : winPos) 
    {
       
     if (gamestate[win[0]] == gamestate[win[1]] && gamestate[win[1]] == gamestate[win[2]] && gamestate[win[0]] != 2&&gamestate[win[0]]==1) {
         
          mx=1;
     }
     else if (gamestate[win[0]] == gamestate[win[1]] && gamestate[win[1]] == gamestate[win[2]] && gamestate[win[0]] != 2&&gamestate[win[0]]==0){
          my=1;
     }
}
 
}
void solve(){
   vi x ,o,em;
    mx=0,my=0;
     forf(int,i,9)
   { {gamestate[i]=2;}
       char ch;cin>>ch;
       if(ch=='X'){x.pb(i);gamestate[i]=1;}
       else if(ch=='O'){o.pb(i);gamestate[i]=0;}
       else if(ch=='_'){em.pb(i);gamestate[i]=2;}
   }
   int a=x.size(),b=o.size(),c=em.size();
   if(c==9&&a==0&&b==0){cout<<"2"<<endl;return;}
   if((a-b)>1){cout<<"3"<<endl;return;}
   if(b>a){cout<<"3"<<endl;return;}
//   if(c==0&&a==5&&b==4){cout<<"1"<<endl;return;}
 
  winning();

    //  if(mx==2&&my==0&&a==5&&b==4&){cout<<"1"<<endl;return;}
     if(mx>0&&my>0){cout<<"3"<<endl;return;}
     
     if(mx==1&&a==(b+1)){cout<<"1"<<endl;return;}
     else if(mx==1&&a!=(b+1)){cout<<"3"<<endl;return;}

      if(my==1&&a==b){cout<<"1"<<endl;return;}
    else if(my==1&&a>b){cout<<"3"<<endl;return;}
    
    mx=0,my=0;
     
   
//    if(a>5||b>4){cout<<"3"<<endl;return;}

   if(c==1&&(a==4&&b==4))
   {
       x.pb(em[0]);gamestate[em[0]]=1;
       winning();
       if(mx>0){cout<<"2"<<endl;return;}
      else{ cout<<"2"<<endl;return;}}
   if(c==1&&(a+1)>5){cout<<"3"<<endl;return;}


   
   if(c>=2)
   { 
    
       if(c%2==0){
          
          a+=c/2;
          b+=c/2;
           if(a+b>9){cout<<"3"<<endl;return;}
           else{cout<<"2"<<endl;return;}
           }
       else{
             a+=(c/2)+1;b+=c/2;
             if(a+b>9){cout<<"3"<<endl;return;}
             else{cout<<"2"<<endl;return;}
       }
   }
   
     
   cout<<"1"<<endl; 

}

int main(){
    

    flash;

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}