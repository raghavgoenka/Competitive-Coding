#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
int toDigit(char ch)
{
    return (ch - '0');
}
 
int sumOfSubstrings(string num)
{
    ll n = num.length();
 
  
    ll prev = toDigit(num[0]);
 
    ll res = prev; 
 
    ll current = 0; 
 
    
    for (ll i = 1; i < n; i++) {
        ll numi = toDigit(num[i]);
 
       
        current = (i + 1) * numi + 10 * prev;
 
      
        res += current;
        prev = current; 
    }
 
    return res;
}
 

int main()
{
    string num;cin>>num;
    cout << sumOfSubstrings(num) << endl;
    return 0;
}