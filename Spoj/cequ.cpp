//https://www.spoj.com/problems/CEQU/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
int main(void)
{
    int n=1;
   
    while(n--)
    {
        int a,b,c;cin>>a>>b>>c;
        int d=__gcd(a,b);
      
        if(c%d==0){
            for(int j=0; a*j<=c; j++){
            if((c-a*j)%b==0)
            {
                cout<<"Yes"<<endl;
                return 0;
            }
        }
            
          
      
        }
          cout<<"No"<<endl;
    }  
}