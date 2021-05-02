//https://www.spoj.com/problems/DIVSUM/
#include<bits/stdc++.h>
#include <iostream>
typedef long long int ll;
using namespace std;
#define N 5000000
int main() {
	
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
	int t ;scanf("%d",&t);
    while(t--)
    {   ll sum=1;
        int num;scanf("%d",&num);
        if(num==1){printf("0\n");}
        else if(isPrime[num]==true){printf("1\n");}
        else{
             for(int i=2;i*i<=num;i++)
             {
                 if (num%i==0) 
                        { 
                        
                            if (i==(num/i)) 
                                sum += i; 
                            else
                                sum += (i + num/i); 
                        } 
             }
             printf("%lld \n",sum);
        }

    }	
	
											
}
