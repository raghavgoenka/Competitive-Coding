#include <iostream>
using namespace std;

int main()
{
    int a1,a2,a3,maxx;
    cout << "Enter numbers" << endl;
    cin >> a1 >> a2 >> a3;
    maxx = a1;
    if(a2 > a1){
        maxx = a2;
    }
    if(a3 > a2 && a3 > a1){
        maxx = a3;
    }
    cout << "maxx number is " << maxx << endl;
    return 0;
}