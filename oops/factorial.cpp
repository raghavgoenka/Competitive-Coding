#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

int main(){
    int num,fact;
    cout << "Enter a number ";
    cin >> num;
    fact = factorial(num);
    cout << "Factorial of " << num << " is " << fact << endl;
    return 0;
}