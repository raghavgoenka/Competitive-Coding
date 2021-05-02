//https://www.codechef.com/LTIME93B/problems/COPRIMEX

#include<bits/stdc++.h>
#include <iostream>
using namespace std;
# define N 1000005
int main() {
	
     bool isPrime[N];
        for(int i = 0; i <N;++i) {
            isPrime[i] = true;
        }
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i * i <N; ++i) {
             if(isPrime[i] == true) {                    
                 for(int j = i * i; j <N ;j += i)
                     isPrime[j] = false;
            }
        }

	int t;cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        for(int i=r+1;i<N;i++)
        {
            if(isPrime[i]==true){cout<<i<<"\n";break;}
        }

    }
											
}


