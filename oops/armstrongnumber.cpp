#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int sum = 0, num = n;
  while (n > 0)
  {
  
    int rem = n % 10;
    sum += pow(rem, 3);
    n = n / 10;
  }
 
  if (sum == num)
  {
    cout << "YES it is an armstrong number " << endl;
  }
  else
  {
    cout << "NO it is not an armstrong number" << endl;
  }
}