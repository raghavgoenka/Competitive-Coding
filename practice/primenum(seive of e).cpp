#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
     bool isPrime[N+1];
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
		int count=0;
	for(int i=2;i<N+1;i++)
   {
	   if(isPrime[i]==true)
	   {
		   count++;
	   }
   }
   cout<<count;
											
}
