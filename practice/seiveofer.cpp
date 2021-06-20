#include<bits/stdc++.h>
#include <iostream>

using namespace std;
 bool isPrime[10000000+1];
int main() {
	int N;
	cin >> N;
    
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
