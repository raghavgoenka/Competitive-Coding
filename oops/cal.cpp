#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;
template<class T,class S>
class calculator
{
    T num1;
    S num2;
    public :
        calculator(T ob1,S ob2)
        {
            num1 = ob1;
            num2 = ob2;
        }
        T sub(T a,S b){return a-b;}
        T mul(T a,S b){return a*b;}
        T add(T a,S b) {return a+b;}
        T div(T a,S b){return a/b;}
        void show()
        {
            cout << "The addition of two number is : "<<add(num1,num2)<<endl;
            cout << "The multiplication of two number is : "<<mul(num1,num2)<<endl;
            cout << "The division of two number is : "<<div(num1,num2)<<endl;
            cout << "The subtraction of two number is : "<<sub(num1,num2)<<endl;
          

            
        }
        
};
int main()
{
    calculator<float,int> num1(21.3,7);
    num1.show();
    calculator<int,float> num2(68,10.2);
    num2.show();
    return 0;
}